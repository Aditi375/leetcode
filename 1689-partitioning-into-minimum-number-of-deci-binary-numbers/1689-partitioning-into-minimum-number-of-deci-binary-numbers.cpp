class Solution {
public:
    int minPartitions(string n) {
        int m=0;
        
        
       for(auto i:n)
       {
           m=max(m,i-'0');
       }
        return m;
    }
};