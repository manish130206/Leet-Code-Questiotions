class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> res = nums1;

        res.insert(res.end(),nums2.begin(),nums2.end());

        sort(res.begin(),res.end());

        int s = res.size();

        if(s % 2 !=0){
            return res[s/2];
        }
        else{
            return (res[s/2]+res[s/2 - 1])/2.0;
        }
        
    }
};
