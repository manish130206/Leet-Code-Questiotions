class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int real = num;

        while(real!= 0){
            int rem = real % 10;
            if(num % rem == 0){
                count++;
            }
            real/=10;
        }

        return count;
        
    }
};
