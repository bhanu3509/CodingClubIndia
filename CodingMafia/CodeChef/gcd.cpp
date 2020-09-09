#include <iostream>
#include<vector>

#define ll long long int

using namespace std;

ll GCD(ll A,ll B)
{
    if(B==0)
    {
        return A;
    }
    else
    {
        return GCD(B,A%B);
    }
}

ll findfractions(vector<ll> arr)
{
    int gcd = GCD(arr[0],arr[1])
    int size = arr.size();
    for(int i=2;i<size;i++)
    {
        gcd = GCD(arr[i],gcd);
    }
    
    return gcd;
}

int main(void) {
	// your code goes here
	ll test;
	cin>>test;
	while(test--)
	{
	    ll n;
	    vector<ll> arr(n);
	    
	    for(ll i= 0; i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    ll num = findfractions(arr);
	
	    for(ll i=0;i<n;i++)
	    {
	        cout<<(arr[i]/num)<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

