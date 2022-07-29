class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(target==nums[i]){
                v.push_back(i);
            }
        }
        if(v.size()==0){
            return {};
        }
        else{
            return v;
        }
    }
};