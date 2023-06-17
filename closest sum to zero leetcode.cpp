class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int near=INT_MAX,ans;
        for(int i=0;i<nums.size();i++)
        if(abs(nums[i])<= near)
        near=abs(nums[i]),ans=nums[i];
        return ans;
        
    }
};
