class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
        for(auto i:nums1){
            nums2.push_back(i);
        }
       

        sort(begin(nums2), end(nums2));

        int length= nums2.size();
        if(length%2){
            return nums2[length/2];
        }else{

            return (nums2[length/2] + nums2[length/2-1])/2.0;
        }


    }
};
