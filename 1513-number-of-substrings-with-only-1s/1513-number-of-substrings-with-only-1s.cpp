class Solution {
public:
    int numSub(string s) {
        
        
        
        int count=0;
        int res=0;
        long long mod=pow(10,9)+7;
        
        
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                count++;
                res=(res+count)%mod;
            }
            else
            {
                count=0;
            }
        }
     return res;
    }
};