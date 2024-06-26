class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size(); 
        int n = grid[0].size();
        int result = 0;
        for (int i = 0; i<m; i++){
            sort(grid[i].begin(), grid[i].end(), greater<int>());
        }
        for (int col = 0; col<n; col++){
            int maxx = 0;
            for (int row = 0; row<m; row++){
                maxx = max(maxx,grid[row][col]);
            }
            result += maxx;
        }
        return result;
    }
};