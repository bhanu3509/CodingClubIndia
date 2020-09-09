#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
#include<algorithm>

class Solution {
public:
    string goatl(string str){
        if(str[0]=='A'||str[0]=='E'||str[0]=='I'||str[0]=='O'||str[0]=='U'
         ||str[0]=='a'||str[0]=='e'||str[0]=='i'||str[0]=='o'||str[0]=='u'
          )
        {
            str += "ma";
            // break;
        }
        else{
            char temp = str[0];
            str.erase(0);
            str +=temp;
            str +="ma";
            // break;
        }
        
        return str;
    }
    
    string toGoatLatin(string S) {
        string str="";
        string gsen="";
        int count=0;
        for(int i=0;i<S.length();i++)
        {
            count++;
            if(S[i] == ' ')
            {
                str = goatl(str);
                for(int j=0;j<count;j++)
                {
                    str += "a";
                }                
                str+=S[i];
                gsen = str;
                str = " "; 
            }
            // else if(i == S.length()-1)
            // {
            //     gsen = goatl(str);
            //     for(int j=0;j<count;j++)
            //     {
            //         gsen+="a";
            //     }
            //     gsen+=S[i];
            //     str = "";                
            // }
            else
            {
                str+=S[i];
            }
            
        }
        return gsen;
    }
};