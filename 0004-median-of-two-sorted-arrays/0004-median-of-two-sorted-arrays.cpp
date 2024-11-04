class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        a.resize(nums1.size() + nums2.size());
        for(int i=0;i<nums1.size();i++){
            a[i]=nums1[i];
        }
        int c=nums1.size();
        for(int j=0;j<nums2.size();j++){
            a[j+c]=nums2[j];
        }
        sort(a.begin(), a.end());
        int b=a.size()/2;
        if(a.size() % 2!=0){
            return a[b];
        }
        double g=(a[b]/2.0+a[b-1]/2.0);
        return g;
    }
};