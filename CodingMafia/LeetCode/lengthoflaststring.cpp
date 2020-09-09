//this has an issue.Bottom one has been submitted
class Solution {
public:
    int lengthOfLastWord(string s) {
        string str="";
        for(auto ch:s)
        {
            if(ch==' ')
            {
                // str="";
                break;
            }
            else
            {
                str += ch;
            }
        }
        return str.length();        
    }
};

// class Solution {
// public:
// int lengthOfLastWord(string s) {
// int l=s.length();
// int c=0;
// for(int i=l-1;i>-1;i--){
// if(s[i]!=' '){
// c++;
// }
// else if(c>0 && s[i]==' '){
// break;
// }
// }
// return c;
// }
// };