class Solution {
public:
    int binarySearch(vector<int> res,int p,int q, int k){
        int s=p;
        int e = q;
        int mid = s+(e-s)/2;

        while(s<=e){
            if(res[mid] == k){
                return mid;
            }
            else if(k > res[mid]){
                s = mid +1;
            }
            else{
                e = mid -1;
            }
            mid = s+(e-s)/2;
        }
        return -1;
    }
    int getPivot(vector<int> res,int n){
         int s=0;
        int e = n-1;
        int mid = s+(e-s)/2;

        while(s<e){
            if( res[mid] >= res[0]){
                s = mid + 1;
            }
            
            else{
                e = mid;
            }
            mid = s+(e-s)/2;
        }
        return s;
    }
    int search(vector<int>& nums, int target)     {
        int n = nums.size();
        int pivot = getPivot(nums,n);

        if(nums[pivot] <= target && target <= nums[n-1]){
            return binarySearch(nums,pivot,n-1,target);
        }
        else{
            return binarySearch(nums,0,pivot - 1,target);
        }
    }
};
