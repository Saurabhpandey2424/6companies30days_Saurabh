// accepted link:https://leetcode.com/problems/largest-divisible-subset/submissions/869645825/
//code
/*
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());

    // To store count of divisors of all elements
    vector <int> divCount(n, 1);

    // To store previous divisor in result
    vector <int> prev(n, -1);

    // To store index of largest element in maximum
    // size subset
    int max_ind = 0;

    // In i'th iteration, we find length of chain
    // ending with arr[i]
    for (int i=1; i<n; i++)
    {
        // Consider every smaller element as previous
        // element.
        for (int j=0; j<i; j++)
        {
            if (arr[i]%arr[j] == 0)
            {    
                if(divCount[i]<divCount[j]+1){// 4 8 10 240 agar if nahi hua here it will fail
                    divCount[i] = divCount[j]+1;
                    prev[i] = j;
                }
            }
        }

        // Update last index of largest subset if size
        // of current subset is more.
        if (divCount[max_ind] < divCount[i])
            max_ind = i;
    }

    // Save result
    vector<int> ans;
    int k = max_ind;
    while (k >= 0)
    {
        ans.push_back(arr[k]);
        k = prev[k];
    }
    return ans;
}

};
*/