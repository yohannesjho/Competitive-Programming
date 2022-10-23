class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        int n=nums.size();
        vector<int> last;
        for(int i=0;i<n;i++){
            last.push_back(stoi(nums[i]));
        }
          int temp;
        for(int j=0;j<n;j++){
            for(int k=0;k<n-1;k++){
                if(last[k]>last[k+1])
                {
                   temp=last[k];
                   last[k]=last[k+1];
                   last[k+1]=temp;
                }
                    
                
            }
        }
        int count=0;
        string result;
        for(int l=n-1;l>=0;l--){
            count++;
            if(count==k)
            {
               result=to_string(last[l]);
                break;
            }
                 
        }
        return result;
    }
};