class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int n = a.size();
        vector<int> dp(n);
        dp[0] = a[0];
        int maxim = a[0];
        for(int i=1;i<n;i++)
        {
            dp[i] = a[i] + (dp[i-1] > 0 ? dp[i-1] : 0);
            maxim = max(dp[i],maxim);
        }
        return maxim;
    }
};

 //         int max_so_far = INT_MIN, max_ending_here = 0; 
//         for (int i = 0; i < a.size(); i++) 
//         { 
//             max_ending_here = max_ending_here + a[i]; 
//             if (max_so_far < max_ending_here) 
//                 max_so_far = max_ending_here; 

//             if (max_ending_here < 0) 
//                 max_ending_here = 0; 
//         } 
//         return max_so_far;