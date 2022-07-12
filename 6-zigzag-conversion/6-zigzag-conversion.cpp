class Solution {
public:
    string convert(string s, int numRows) {
        	vector<string> sub(numRows, "");
 
        
        int i=0;
        while(i<s.length())
        { 
       int j=0;
            while(j<numRows&&i<s.length())
            {
                sub[j]+=s[i++];
                j++;
              
            }
      j=numRows-2;
           
            while(j>0&&i<s.length())
            {
                sub[j]+=s[i++];
                j--;
              
            }
            
         
        }
        string ans="";
        for(int i=0;i<sub.size();i++)
        {
            ans+=sub[i];
        }
        return ans;
    }
};