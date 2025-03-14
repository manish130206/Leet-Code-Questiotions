class Solution {
public:
    int subtractProductAndSum(int n) {
        int a = n;
        int sum = 0;
        int pro = 1;

        while(a!=0){
            int b =  a % 10;
           sum = sum + b;
           pro = pro * b;

           a/=10;
        }

        return (pro-sum);
        
    }
};
