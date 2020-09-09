class Solution{
    public:
    int perfectsubarraystring(string s)
    {
        int numL=0,numR=0,count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')
            {
                numL++;
            }
            else if(s[i]=='R')
            {
                numR++;
            }

            if(numL==numR)
            {
                count++;
                numL=0;
                numR=0;
            }
        }
        return count;
    }
}