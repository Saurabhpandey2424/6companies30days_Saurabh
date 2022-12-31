// Accepted link:https://leetcode.com/problems/evaluate-reverse-polish-notation/submissions/868498646/
class Solution
{
public:
    int evalRPN(vector<string> &tok)
    {
        stack<int> nums;

        for (int i = 0; i < tok.size(); i++)
        {

            if (tok[i].compare("+") == 0 || tok[i].compare("*") == 0 || tok[i].compare("/") == 0 || tok[i].compare("-") == 0)
            {

                int x = nums.top();
                nums.pop();
                int y = nums.top();
                nums.pop();

                if (tok[i].compare("+") == 0)
                    nums.push(y + x);
                else if (tok[i].compare("*") == 0)
                    nums.push(y * x);
                else if (tok[i].compare("-") == 0)
                    nums.push(y - x);
                else
                    nums.push(y / x);
            }
            else
            {

                nums.push(stoi(tok[i]));
            }
        }
        return nums.top();
    }
};