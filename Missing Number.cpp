class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int sum = 0;
        int n = nums.size() + 1;

        for(int i=0;i<n - 1;i++){
            sum += nums[i];
        }

        int Esum = (n*(n - 1))/2;

        return Esum - sum;
        
    }
};
