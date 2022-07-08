class Solution {
public:
    int maxDepth(string s) {
        
        
        int max1=0;
        int count=0;
        
        
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
               max1++;
                
            }
            else if(s[i]==')')
            {
                max1--;
              
            }
            count=max(count,max1);
        }
        return count;
    }
};