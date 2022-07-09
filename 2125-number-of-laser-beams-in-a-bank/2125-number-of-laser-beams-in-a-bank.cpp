class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
      
        
        vector<int> r;
        int count=0;
        int prev=0;
        for(int i=0;i<bank.size();i++)
        {
              int sum=0;
            for(int j=0;j<bank[i].size();j++)
            {
                if(bank[i][j]=='1')
                {
                    sum=sum+1;
                }
            }
            if(sum!=0)
            {
               count+=prev*sum;
                prev=sum;
               
            }
        }
        
        

        
        
        return count;
    }
};