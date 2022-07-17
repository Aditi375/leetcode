class Solution {
public:
    int minSwaps(string s) {
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
    }
};