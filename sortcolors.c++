class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> result;
        int n=nums.size();
        int temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(nums[j]>nums[j+1])
                {
                  temp=nums[j];
                  nums[j]=nums[j+1];
                  nums[j+1]=temp;
                }
                   
                  
            }
            
        }
        for(int i=0;i<n;i++){
            cout<<nums[i];
        }
         
    }
};