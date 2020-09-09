
int Solution::numTrees(int n) {
// The summation of  the product (i-1)*(A-i) is the number of unique binary trees.
    // DP to store the number of unique BST with key i 
    int dp[n + 1]; 
    fill_n(dp, n + 1, 0); 
  
    // Base case 
    dp[0] = 1; 
    dp[1] = 1; 
  
    // fill the dp table in top-down approach. 
    for (int i = 2; i <= n; i++) { 
        for (int j = 1; j <= i; j++) { 
  
            // n-i in right * i-1 in left 
            dp[i] = dp[i] + (dp[i - j] * dp[j - 1]); 
        } 
    } 
  
    return dp[n]; 
}
