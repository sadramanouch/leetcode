class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int x = points[0][0];
        int y = points[0][1];
        int res = 0;
        for(int i = 1; i<points.size(); i++){
            res += max(abs(x - points[i][0]), abs(y - points[i][1]));
            x = points[i][0];
            y = points[i][1];
        }
        return res;
    }
};