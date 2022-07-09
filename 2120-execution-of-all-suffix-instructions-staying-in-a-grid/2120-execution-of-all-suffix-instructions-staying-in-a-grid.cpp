class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        
       
        //r is less than n
        //c is less than n
        //instructuions: L:c=c-1; R:c=c+1; U:r=r-1; D:r=r+1;
        
        vector<int> R(s.length(),0);
        for(int i=0;i<s.length();i++)
        {
             int r=startPos[0];
        int c=startPos[1];
            int count=0;
            for(int j=i;j<s.length();j++)
            {
                if(s[j]=='L')
                {
                   if(c-1>=0 && c-1<n) c-=1 , count++;
                    else break;
                   
                }
                else if(s[j]=='R')
                {
                   if(c+1>=0 && c+1<n) c+=1 , count++;
                    else break;
                   
                }
                else if(s[j]=='U')
                {
                 if(r-1>=0 && r-1<n) r-=1 , count++;
                    else break;
                   
                }
                else if(s[j]=='D')
                {
                   if(r+1>=0 && r+1<n) r+=1 , count++;
                    else break;
                   
                }
            }
            R[i]=count;
            
            
            
        }
        return R;
    }
};