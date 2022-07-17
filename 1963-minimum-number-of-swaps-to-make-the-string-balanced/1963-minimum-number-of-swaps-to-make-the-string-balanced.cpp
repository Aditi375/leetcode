class Solution {
public:
    int minSwaps(string s) {
        
        /*
        
        approach 1
        int m=0;
        int curr=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==']')
            {
                curr++;
               
            }
            else if(s[i]=='[')
            {
                curr--;
                
            }
             m=max(curr,m);
        }
        return (m+1)/2;
        */
        
        
        //approach 2 using stack
        //if we make a single swapit will affect 2 closing brackets
        
        stack<int> st;
        
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='[')
            {
                st.push(s[i]);
            }
            else
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
        }
        
        return (st.size()+1)/2;
        
        
    }
};