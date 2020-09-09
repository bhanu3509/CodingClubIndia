#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string str,str_lef,str_ri;
        cin>>str;
        int mid = str.length()/2;
        if(str.length()%2==0)
        {
            str_lef = str.substr(0,mid);
            str_ri = str.substr( mid,str.length() );
        }
        else
        {
            str_lef = str.substr(0,mid);
            str_ri = str.substr( mid+1,str.length() );
        }
        //reverse string
        string strrev = str_ri;
        reverse(strrev.begin(),strrev.end());
        int count = 0;
        // for(int i=0;i<mid;i++)
        // {
        //       if(str_lef[i] != str_ri[i])
        //       {
        //             count++;
        //             break;
        //       }
        // }
        
        if(str_lef == str_ri || str_lef == strrev)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}  