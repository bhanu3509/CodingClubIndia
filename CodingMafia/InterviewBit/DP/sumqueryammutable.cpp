class NumArray {
private:
    vector<int> sum = {0};
public:
    NumArray(vector<int>& nums) {
         int add = 0; 
        for(int i=0;i<nums.size();i++)
        {
            add += nums[i];
            sum.push_back(add);
        }
    }
    
    int sumRange(int i, int j) {
        return sum[j+1]-sum[i];
    }
};