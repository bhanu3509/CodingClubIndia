#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	long long test;
	cin>>test;
	while(test--)
	{
	      long long N;
          cin>>N;
	      int arr[N];
	      for(int i=0;i<N;i++)
	      {
	            cin>>arr[i];
	      }
	     // long int minsum=0;
            sort(arr,arr+N);
	      cout<<arr[0]+arr[1]<<endl;
	}
	return 0;
}
