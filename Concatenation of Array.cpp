class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();

        vector<int> a(2*n);

        for(int i=0;i<nums.size();i++){
            a[i] = nums[i];
            a[i+n] = nums[i];
        }
        return a;
        
    }
};
