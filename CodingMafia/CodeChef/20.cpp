#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--)
	{
	    int count =0;
	    string str;
	    cin>>str;
	    for(int i=0;i<str.size();i++)
	    {
	        if(str[i] == 'A'||str[i] == 'D'|| str[i] == 'O' || str[i] == 'P'|| str[i] == 'R')
	        {
	            count++;
	        }
	        else if(str[i]=='B')
	        {
	            count = count + 2;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}

//2
//CODECHEF
//DRINKEATCODE
