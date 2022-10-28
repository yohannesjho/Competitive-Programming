public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans;
        int count=0;
        for(int i=0;i<temperatures.size();i++){
            if(i==temperatures.size()-1) ans.push_back(0);
            for(int j=i+1;j<=temperatures.size()-1;j++){
                
                count++;
                if(temperatures[j]>temperatures[i]){
                    ans.push_back(count);
                    count=0;
                    break;
                }
                else if(j==temperatures.size()-1 and temperatures[j]<=temperatures[i])
                    ans.push_back(0);
                
            }
             
            
        }
        return ans;
    }
};