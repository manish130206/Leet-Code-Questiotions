class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = 0,count=0;
        if(n==0){
            return false;
        }
        while(n!=0){
            ans = n & 1;
            if(ans == 1){
                count++;

                if(count >= 2){
                    return false;
                }
            }
            n = n >>1;
        }
        return true;
    }
};
