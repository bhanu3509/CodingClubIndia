#include <iostream>
using namespace std;

int main() {
	// your code goes here
        int test;
        while(scanf("%d",&test)!=EOF)
        {
            int N,K;
            cin>>N>>K;
            string input[N];

            for(int i=0;i<N;i++)
            {
                cin>>input[i];
                int n = input[i].length();
                if(input[i] == "CLOSEALL")
                {
                    cout<<"0"<<endl;
                }
                else
                {
                    char ch = input[i].back();
                    cout<<ch<<endl;
                }
            }
        }
	return 0;
}
