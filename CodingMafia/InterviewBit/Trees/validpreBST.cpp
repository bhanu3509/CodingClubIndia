#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class validpreBST
{
public:
    int validpreorderBST(vector<int> &pre)
    {
        stack<int> s;
        int root = INT_MIN;
        for(int i=0;i<A.size();i++)
        {
            if(root>pre[i])
            {
                return 0;
            }

            while(!s.empty() && s.top()<pre[i])
            {
                root = s.top();
                s.pop(); 
            }
            s.push(pre[i]);
        }
        return 1;
    }

};
