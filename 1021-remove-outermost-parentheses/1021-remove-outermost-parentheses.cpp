class Solution {
public:
    string removeOuterParentheses(string s) {
     string t="";
        
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(') c++;
            if(c>1)
            {
                t=t+s[i];
            }
            if(s[i]==')') c--;
            
        }
        return t;
    }
};