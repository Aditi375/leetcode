class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        unordered_map<char,int> mp;
        
        
        for(int i=0;i<sentence.length();i++)
        {
            mp[sentence[i]]++;
        }
        
      cout<<char('a'+25);
        
        
        for(int i=0;i<=25;i++)
        {
            if(mp.find('a'+i)==mp.end())
            {
              return false;  
            }
        }
        return true;
    }
};