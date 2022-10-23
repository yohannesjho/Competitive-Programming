class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()/2;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[nums.size()-1-i]);
        }
        
        if(nums.size()&1) ans.push_back(nums[nums.size()/2]);
            return ans;
        
    }
};