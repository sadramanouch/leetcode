class Solution {
public:
    int getMaximumGenerated(int n) {
        if (n < 2){
            return n;
        }
        vector<int> v(n+1);
        int m = 0;
        v[0] = 0;
        v[1] = 1;
        for (int i = 2; i <= n; i++) {
            if (i % 2){
              v[i] = v[i / 2] + v[i / 2 + 1];  
            } 
            else{
                v[i] = v[i / 2];
            } 
            m = max(v[i], m);
        }
        return m;
    }
};