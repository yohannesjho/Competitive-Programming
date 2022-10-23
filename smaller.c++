class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
         
        vector<int> freq;
        for(int j=0;j<n;j++){
            int total=0;
            for(int i=0;i<n;i++){
                if(nums[j]>nums[i] && j!=i) 
                    total++;
            }
              freq.push_back(total);
            
        }
        return freq;
    }
};