class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       
        unordered_map<char,int> mp;
         int count=0;   
        
        for(int i=0;i<allowed.length();i++)
        {
            mp[allowed[i]]++;
        }
        
        for(int i=0;i<words.size();i++)
        {
           string temp=words[i];
            bool p=true;
            for(int j=0;j<temp.length();j++)
            {
               if(mp.find(temp[j])==mp.end())
               {
                   p=false;
                   
               }
            }
            if(p==true)
            {
                count++;
            }
        }
        return count;
    }
};