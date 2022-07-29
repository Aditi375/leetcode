class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> res;
       
        for(int i=0;i<words.size();i++)
        {
            if(isomorphic(words[i],pattern)){
                res.push_back(words[i]);
            }
        }
        
        return res;
        
    }
    
    bool isomorphic(string t,string p)
    {
      unordered_map<char,char> wrd;
        unordered_map< char,char> patt;
        
        
        for(int i=0;i<t.length();i++)
        {
           char a=t[i] ;
           char b=p[i] ; if(wrd.find(a)!=wrd.end()&&wrd[a]!=b||patt.find(b)!=patt.end()&&patt[b]!=a)
            {
                return false;
            }
            wrd[a]=b;
            patt[b]=a;
        }
        
        
        return true;
    }
};