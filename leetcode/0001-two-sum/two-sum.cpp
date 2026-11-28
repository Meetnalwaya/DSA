// LeetCode 1. Two Sum
// Difficulty: Easy
// Language: C++
// Submitted: 2026-11-28 10:20 UTC
// Runtime: 44 ms | Memory: 14 MB
// https://leetcode.com/problems/two-sum/
// ---

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = 1;

        for (int i = 0; i<nums.size(); i++){
            for( int j = i+1 ; j<nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};
