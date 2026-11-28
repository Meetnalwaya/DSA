// LeetCode 54. Spiral Matrix
// Difficulty: Medium
// Language: C++
// Submitted: 2026-11-28 17:09 UTC
// Runtime: 0 ms | Memory: 9.3 MB
// https://leetcode.com/problems/spiral-matrix/
// ---

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int totalElement = rows*cols;

        int row = 0;
        int end_row = rows-1;

        int col = 0;
        int end_col = cols-1;

        int cnt = 0;
        vector<int>ans;
        while(cnt < totalElement){
            for(int i = col; cnt < totalElement && i <= end_col; i++){
                ans.push_back(matrix[row][i]);
                cnt++;
            }
            row++;

            for(int i = row; cnt < totalElement && i <= end_row; i++){
                ans.push_back(matrix[i][end_col]);
                cnt++;
            }
            end_col--;


            for(int i = end_col; cnt < totalElement && i >= col; i--){
                ans.push_back(matrix[end_row][i]);
                cnt++;
            }
            end_row--;

            for(int i = end_row; cnt < totalElement && i >= row; i--){
                ans.push_back(matrix[i][col]);
                cnt++;
            }
            col++;
        }

        return ans;
    }
};
