// LeetCode 268. Missing Number
// Difficulty: Easy
// Language: C++
// Submitted: 2026-11-24 16:18 UTC
// Runtime: 0 ms | Memory: 21.6 MB
// https://leetcode.com/problems/missing-number/
// ---

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        int total_sum = (n * (n+1))/2;
        int arr_sum = 0;
    
        for (int i = 0; i<nums.size(); i++){
            arr_sum +=nums[i];
            }
        return total_sum - arr_sum ;
        }
};
