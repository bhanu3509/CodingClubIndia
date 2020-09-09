// import java.io.*;
import java.io.*;
import java.util.*;
import java.lang.*;

class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        
        //find if number exist, and add its frequency as value
        int[] valFrequency = new int[101];
        for (int i = 0; i < nums.length; i++) {
                valFrequency[nums[i]]++;
        }
        
        //for every existing number, go from left to right to find the count answer
        int count = 0;
        for (int i = 0; i < valFrequency.length; i++) {
            if (valFrequency[i] != 0) {
                int freqHolder = valFrequency[i];
                valFrequency[i] = count; //replace the purpose of value from frequency to count
                count = count + freqHolder ;
                
            }
        }
        
        //replace the given array with the count answer
        for (int i = 0; i < nums.length; i++) {
            nums[i] = valFrequency[nums[i]];
        }
        

        return nums;
        
    }

    public static void main(String args[]){
        Solution in = new Solution();
        int[] nums = {8,1,2,2,3};
        in.smallerNumbersThanCurrent(nums);
    }
}
