// Accepted link(fast):https://leetcode.com/problems/bulls-and-cows/submissions/868902420/
// Accepted link (slower one by me):https://leetcode.com/problems/bulls-and-cows/submissions/868892217/
/*(mine solution)
  class Solution {
public:
    int check(string s, char g,string guess){
        for(int i=0;i<s.length();i++){
            if(s[i]!=guess[i]){
                if(s[i]==g)
                  return i;
            }
        }
        return -1;
    }
    string getHint(string secret, string guess) {
        int count=0,count2=0;//of bulls
        for(int i=0;i<secret.length();i++){
            if(secret[i]==guess[i])
               secret[i]='Z',count++;
            else if(check(secret,guess[i],guess)>=0)
            secret[check(secret,guess[i],guess)]='Z',count2++;
        }
    string s= to_string(count)+ "A" +  to_string(count2) +"B";
     return s;
    }
};
*/