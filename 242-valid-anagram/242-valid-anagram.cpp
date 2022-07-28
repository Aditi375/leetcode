class Solution {
public:
    bool isAnagram(string s, string t) {
        
        
        unordered_map<char,int> mp;
        if(s.length()!=t.length())
        {
            return false;
        }
        else
        {
        for(int i=0;i<t.length();i++)
        {
            mp[t[i]]++;
            mp[s[i]]--;
        }
        
        
       for(auto i:mp)
       {
           if(i.second!=0)
           {
               return false;
           }
       }
        }
        return true;
    }
};