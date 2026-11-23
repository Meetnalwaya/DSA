// LeetCode 189. Rotate Array
// Difficulty: Medium
// Language: C++
// Submitted: 2026-11-23 19:24 UTC
// Runtime: 20 ms | Memory: 265.6 MB
// https://leetcode.com/problems/rotate-array/
// ---

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();

        vector<int> arr = nums;
        for(int i = 0; i<nums.size(); i++){
            arr.push_back(nums[i]);
        }

        int n = nums.size() - k;
        for (int i = 0; i<nums.size(); i++){
            nums[i] = arr[n];
            n++;
        }
    }
};
