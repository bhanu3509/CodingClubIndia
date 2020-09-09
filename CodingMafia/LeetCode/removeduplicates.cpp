#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int count=0;
        // int n = nums.size();
        // int ip = nums.unique(nums.begin(),nums.end());
        // sort( vec.begin(), vec.end() );
        nums.erase( unique( nums.begin(), nums.end() ), nums.end() );
    return nums.size();    
    }
};

//This code has been referred from Stack Overflow
//LeetCode remove duplicates and return size of the resultant vector.