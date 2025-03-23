class Solution {
public:

    int getpivot(vector<int>& nums,int size){
        int s = 0;
        int e = size-1;
        int mid = s + (e-s)/2;

        while(s<e){
            if(nums[mid]>nums[e]){
                 s = mid +1;
            }
            else {
                e = mid;
            }
            
            mid = s + (e-s)/2;

        }
        return nums[s];

    }

    int findMin(vector<int>& nums) {
        int n = nums.size();

        int pivot = getpivot(nums,n);

        return pivot;
    }
};
