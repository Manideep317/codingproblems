class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int end=nums.size()-1;
        int ans=0;
        int start=0;
        int mid=start+(end-start)/2;
        while(start<=end){
            mid=start+(end-start)/2;
            if(target==nums[mid]){
                return mid;
            }
            if(target>nums[mid]){
                start=mid+1;
                ans=mid+1;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            
        }
        return ans;
    }
};