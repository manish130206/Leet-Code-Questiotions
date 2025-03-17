class Solution {
public:
    int firstOcc(vector<int>& nums, int n , int k)
{
    int s = 0,e = n-1,ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(nums[mid] == k){
            ans = mid;
            e = mid -1;
        }
        else if(nums[mid] > k){
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

    int lastOcc(vector<int>& nums, int n , int k)
{
    int s = 0,e = n-1,ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(nums[mid] == k){
            ans = mid;
            s = mid + 1;
        }
        else if(nums[mid] > k){
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        pair<int,int> p;
        int n = nums.size();
        vector<int> res;

        int a =   firstOcc(nums, n , target);
        int b  = lastOcc( nums, n , target);
        res.push_back(a);
        res.push_back(b);
        return res;
    }
};
