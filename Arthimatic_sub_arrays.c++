class Solution {
public:
    bool isArthimatic(vector<int>& vec){
        int n=vec.size();
        if(n==2) return true;
         int d=vec[1]-vec[0];
        for(int i=2;i<n;i++)
        {
            if(vec[i]-vec[i-1]!=d)
                return false;
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n=nums.size();
        int m=l.size();
        
        vector<bool> ans;
        
        for(int i=0;i<m;i++){
            vector<int> vec;
            for(int j=l[i];j<=r[i];j++)
            {
              vec.push_back(nums[j]);
                
                
            }
            sort(vec.begin(),vec.end());
             if(isArthimatic(vec))
                 ans.push_back(true);
             
            else 
                ans.push_back(false);
                
        }
        return ans;
    }
};