// LeetCode 169. Majority Element
// Difficulty: Easy
// Language: C++
// Submitted: 2026-11-27 11:06 UTC
// Runtime: 0 ms | Memory: 42.2 MB
// https://leetcode.com/problems/majority-element/
// ---

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int maj = 0;

        for ( int i = 0; i<nums.size(); i++){
            if ( cnt == 0){
                nums[maj] = nums[i];
            }
            if (nums[maj] != nums[i]){
                cnt--;
            }
            if (nums[maj] == nums[i]){
                cnt++;
            }
        }
        return nums[maj];
    }
};
