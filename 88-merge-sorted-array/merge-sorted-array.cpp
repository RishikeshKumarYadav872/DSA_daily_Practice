class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int>res(m+n);

        int i = 0,j = 0,k = 0;
        while(i<m && j<n){
            if(nums1[i] < nums2[j]) {res[k] = nums1[i]; i++;k++;}
            else {res[k] = nums2[j]; j++;k++;}
        }

        if(i==m){
            while(j<n){
                res[k] = nums2[j];
                k++; j++;
            }
        }
        else{
            while(i<m){
                res[k] = nums1[i];
                k++; i++;
            }
        }
        for(int x = 0; x < m + n; x++) {
            nums1[x] = res[x];
        }
    }
};