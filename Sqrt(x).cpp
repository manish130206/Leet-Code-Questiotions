class Solution {
public:

   long long int Binarysearch(int n){
        int s = 0;
        int e = n-1;

         long long int mid = s + (e-s)/2;
         long long int  ans = -1;

        while(s<=e){
          long long int squre = mid*mid;

            if(squre == n){
                return mid;
            }
            else if(squre < n){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;

    }
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        if(x==1){
            return 1;
        }
       return Binarysearch(x);
    }
};
