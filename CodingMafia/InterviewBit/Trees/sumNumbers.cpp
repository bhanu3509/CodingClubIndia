struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x),left(NULL),right(NULL){}
};

void solve(TreeNode* A,long long lastval, long long &sum)
{
    if(A == NULL)
    {
        return;
    }

    long long currval = (lastval*10 + A->val)%1003;
    if(A->left == NULL && A->right == NULL)
    {
        sum = sum + currval;
        sum = sum%1003;
    }
    else
    {
        solve(A->left,currval,sum);
        solve(A->right,currval,sum);
    }
    
}

class Solution{
    private:
        /* data */
    public:
        Solution(/* args */);
        ~Solution();

    int sumNumbers(TreeNode* A)
    {
        long long int sum =0;
        solve(A,0,sum);
        return sum;   
    }

};