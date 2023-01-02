
// Accepted link:https://leetcode.com/problems/rotate-function/submissions/869601630/
/*
class Solution {
public:

    int maxRotateFunction(vector<int>& A) {
        int allSum = 0;
        int len = A.size();
        int F = 0;
        for (int i = 0; i < len; i++) {
            F += i * A[i];
            allSum += A[i];
        }
        int mx = F;
        for (int i = len - 1; i >= 1; i--) {
            F = F + allSum - len * A[i];
            mx = max(F, mx);
        }
        return mx;
        }


};
*/