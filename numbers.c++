class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n=nums.size();
         int temp;
        vector<int> size;
        for(int i=0;i<n;i++){
           
            for(int j=0;j<n-1;j++)
            {
                if(nums[j]> nums[j+1]){
                    temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                    
                        
                }
            }
        }
        int count;
        for(int k=0;k<n;k++){
            if(nums[k]==target)
                size.push_back(k);
        }
        return size;
        
    }
};