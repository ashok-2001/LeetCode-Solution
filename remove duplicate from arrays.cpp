class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i=0; i<size(nums); i++){
            s.insert(nums[i]);
        }
        int k=0;
        for(auto it=s.begin(); it!=s.end(); it++){
            nums[k++]=*it;
        }
        return k;
    }
};
