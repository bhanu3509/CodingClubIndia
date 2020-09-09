#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	int arr[1000] = {0};
	for(int i=0;i<t;i++)
	{
		int n;
	    cin>> n;
	    if(n<10){
	    	cout<<n<endl;
		}
		else{
			int last = n%10;
			while(n>9)
			{
				n = n/10;
			}
			
		}


	return 0;
}


