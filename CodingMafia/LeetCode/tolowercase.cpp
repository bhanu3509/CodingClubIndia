#include<iostream>
#include<string>
#include<vector>

class Solution{
public:
    string toLowerCase(string str){
        transform(str.begin(),str.end(),str.begin(),::tolower);
    }
}