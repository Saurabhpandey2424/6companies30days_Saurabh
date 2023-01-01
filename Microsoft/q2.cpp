// Accepted solution link:https://leetcode.com/problems/combination-sum-iii/submissions/868864145/

// class Solution
// {
// public:
//     vector<vector<int>> ans;
//     int sum(vector<int> v)
//     { // to check is the sum of   the combination is right or not.
//         int sum = 0;
//         for (auto x : v)
//         {
//             sum += x;
//         }
//         return sum;
//     }
//     void check_comb(int k, int n, vector<int> cmb, int num)
//     {
//         if (sum(cmb) == n && k == 0)
//             ans.push_back(cmb);
//         if (k == 0)
//             return;
//         if (num > 9)
//             return;
//         cmb.push_back(num);
//         check_comb(k - 1, n, cmb, num + 1);
//         cmb.pop_back(); // backracking
//         check_comb(k, n, cmb, num + 1);
//         //[1,3]->go to[0,4] but fail then come back->[1,4].....[1,9]->->
//     }
//     vector<vector<int>> combinationSum3(int k, int n)
//     {

//         vector<int> comb;
//         check_comb(k, n, comb, 1);
//         return ans;
//     }
// };