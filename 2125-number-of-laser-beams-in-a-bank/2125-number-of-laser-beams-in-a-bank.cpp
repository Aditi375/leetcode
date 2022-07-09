class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
        int sum=0;
        
        vector<int> r;
        
        for(int i=0;i<bank.size();i++)
        {
            for(int j=0;j<bank[i].size();j++)
            {
                if(bank[i][j]=='1')
                {
                    sum=sum+1;
                }
            }
            if(sum!=0)
            {
                r.push_back(sum);
                sum=0;
            }
        }
        
        
int count=0;
        if(r.size()<2)
        {
            return 0;
        }
        for(int i=0;i<r.size()-1;i++)
        {
            count+=r[i]*r[i+1];
        }
        
        return count;
    }
};