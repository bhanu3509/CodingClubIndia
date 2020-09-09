class Solution {
public:
    int maxNumberOfBalloons(string text) {
       int b=0,a=0,l=0,o=0,n=0;
        for(auto ch:text)
        {
            b+=ch=='b';
            a+=ch=='a';
            l+=ch=='l';
            o+=ch=='o';
            n+=ch=='n';
        }
        return min({b,a,l/2,o/2,n});
    }
};