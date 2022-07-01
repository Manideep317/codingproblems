class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>sumarr;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            sumarr.push_back(sum);
        }
        return sumarr;
    }
};