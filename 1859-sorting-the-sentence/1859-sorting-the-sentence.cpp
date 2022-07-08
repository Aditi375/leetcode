class Solution {
public:
    string sortSentence(string s) {
        
        string s1="";
        int count=1;
        int n=s.length();
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                count++;
            }
            else
            {
                s1=s1+s[i];
            }
        }
       
      vector<string> r(count,"");
        string r1="";
        
        for(int i=0;i<s1.length();i++)
        {
           if(!isdigit(s1[i]))
           {
              r1=r1+s1[i] ;
            
           }
            else
            {
              r[s1[i]-'0'-1] =r1;
                   r1="";
            
            }
        }
        
       
    string result="";
        
        for(int i=0;i<r.size()-1;i++)
        {
            result=result+r[i]+" ";
            
        }
      return result+r[r.size()-1];
    }
};