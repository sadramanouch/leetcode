class Solution {
public:
    bool isHappy(int n){
        if (n == 1){
            return true;
        }
        while(n != 1){
            int sum=0;
            while(n != 0){
                sum = sum + (n%10)*(n%10);
                n = n/10;
            }
            n = sum;
            if(n==1){
                return true;
            }
            if(n==37){
                return false;
            }
        }
        return false;
    }
};