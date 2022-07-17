class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
      
        
 
      stack<int> st;
        int n=temperatures.size();
               vector<int> r(n,0);
        
        
        for(int i=n-1;i>=0;i--)
        {
            
            while(!st.empty()&&temperatures[st.top()]<=temperatures[i])
            {
                st.pop();
            }
            if(!st.empty())
            {
                r[i]=st.top()-i;
            }
            else
            {
                r[i]=0;
            }
            
            st.push(i);
        }
        
        return r;
        
    
    }
};