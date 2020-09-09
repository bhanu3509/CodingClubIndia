int findoccurence(const vector<int> &A,int n,int B,bool index) {
    int low = 0, high = A.size()-1;
    int result = -1;
    if(low>high)
    {
        return 0;
    }
    
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(A[mid] == B)
        {
            result = mid;
            if(index)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        else if(A[mid]>B)
        {
            // result = 0;
            high = mid-1;
        }
        else if(A[mid]<B)
        {
            // result = 0;
            low = mid+1;
        }
        
        
    }
    
    return result;
}
int Solution::findCount(const vector<int> &A, int B) {
    int first = findoccurence(A,A.size(),B,true);
    int last = findoccurence(A,A.size(),B,false);
    

    if(A[last] != B || A[first] != B)
    {
        return 0;
    }
    else 
    {
        return (last-first +1);
    }
}
