class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int ssum=0;
        int dsum=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                ssum += nums[i];
            }
            else{
                dsum += nums[i];
            }
        }

        if(ssum != dsum){
            return true;
        }
        else{
            return false;
        }
        
    }
};
