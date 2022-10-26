class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        
        int i=nums.size()-1;
        int j=0;
        vector<int>ans;
        while(j<i){
            ans.push_back(nums[j]+nums[i]);
            j++;
            i--;
        }
        int max=ans[0];
        for(int k=0;k<ans.size();k++){
            if(ans[k]>max) max=ans[k];
        }
        
        return max;
    }
};