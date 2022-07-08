class Solution {
public:
    string decodeMessage(string key, string message) {
        
        
        unordered_map<char,char> mp;
      
        int j=0;
        for(int i=0;i<key.length();i++)
        {
            
            if(key[i]==' ')
            {
                continue;
            }
            else if(mp.find(key[i])!=mp.end())
            {
                continue;
            }
            else if(mp.find(key[i])==mp.end())
            {
                mp[key[i]]='a'+j;
                j++;
              
            }
            
        }
        
        string r="";
        for(int i=0;i<message.length();i++)
        {
            if(message[i]==' ')
            {
                r+=" ";
            }
            else
            {
                r+=mp[message[i]];
            }
        }
        return r;
    }
};