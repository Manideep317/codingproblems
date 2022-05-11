class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int i;
        int x;
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            x=i%10;
            if(x==nums[i]){
                v.push_back(i);
            }
        }
        if(v.size()==0){
            return {-1};
        }
        else{
            sort(v.begin(),v.end());
            return v[0];
        }
    }
};
