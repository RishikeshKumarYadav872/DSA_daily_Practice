class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        vector<int>v(m+n);
        int i = m-1, j = n-1, k = m+n-1;

        while(i >= 0 && j >=0){
            if(nums1[i]>nums2[j]){
                v[k] = nums1[i];
                k--; i--;
            }
            else if(nums2[j] >= nums1[i]){
                v[k] = nums2[j];
                k--; j--;
            }
        }

        while(j>=0){
            v[k] = nums2[j];
            k--; j--;
        }

        while(i>=0){
            v[k] = nums1[i];
            k--; i--;
        }

        double median;
        if((m+n)%2 != 0) {
            median = v[(m+n)/2];
        }
        else{
            median = (v[(m+n)/2] + v[(m+n-1)/2])/2.0;
        }
        return median;
    }
};