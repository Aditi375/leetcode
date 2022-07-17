class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        stack<pair<char,int>> st;
        st.push({s[0],1});
     
        for(int i=1;i<s.length();i++)
        {
            if(!st.empty()&&st.top().first==s[i])
            {
                
                st.top().second++;
                if(st.top().second==k)
                {
                    st.pop();
                }
                else
                {
                    continue;
                }
               
                
                
            }
            else
            {
                st.push({s[i],1});
            }
            
             
            
            
        }
    string r="";
       
       while(!st.empty())
       {
           while(st.top().second!=0)
           {
           r+=st.top().first;
            st.top().second--;
           }
           
           st.pop();
       }
reverse(r.begin(),r.end());
        return r;
      
    }
};