class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        
        
        vector<int> res(prices.size(),0);
        
        stack<int> s;
        
        for(int i=prices.size()-1;i>=0;i--)
        {
            while(!s.empty()&&s.top()>prices[i])
                s.pop();
            if(s.empty())
            {
               res[i]=prices[i];
            }
            else
            {
                res[i]=prices[i]-s.top();
            }
            s.push(prices[i]);
        }
        return res;
    }
};