#include <iostream>
#include<map>
#include<algorithm>

using namespace std;

map<long long int,long long int> dp;

// long long int max(long long int a, long long int b)
// {
//       return (a>b?a:b);
// }

long long int solve(long long int n)
{
      if(n<12)
      {
        return n;
      }
      
      if(dp[n] != 0)
      {
            return dp[n];
      }
      else if(dp[n]==0)
      {
        long long int result = max( n, solve(n/2)+solve(n/3)+solve(n/4));
        dp[n] = result;
      }

      return dp[n];
}


int main() 
{
	long long int n;
    scanf("%lld",&n);
    long long int solution = solve(n);
	cout<<solution<<endl;
	
    return 0;
}

