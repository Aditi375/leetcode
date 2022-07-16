class Solution {
public:
    string makeGood(string s) {
        
        stack<char> st;
        string r="";
       
        for(int i=0;i<s.length();i++)
        {
            
           if(!st.empty()&&st.top()==tolower(s[i])&&st.top()!=s[i]) 
           {
               
               st.pop();
           }
            else if(!st.empty()&&st.top()==toupper(s[i])&&st.top()!=s[i]) 
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
            
        }
        while(!st.empty())
        {
            r=r+st.top();
            st.pop();
        }
        reverse(r.begin(),r.end());
        return r;
    }
};