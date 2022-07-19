class Solution {
public:
    int firstUniqChar(string s) {
        //hashmap+queue
        
        queue<int> q;
        unordered_map<int,int> mp;
        
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
            q.push(s[i]);
        }
        
        int idx=0;
        while(!q.empty())
        {
            
            
            
            if(mp[q.front()]>1)
            {
                q.pop();
                idx++;
                
            }
            else
            {
                return idx;
            }
        }
        return -1;
    }
};