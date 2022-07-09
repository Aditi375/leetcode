class Solution {
public:
    int minPartitions(string n) {
        int m=INT_MIN;
        
        
       for(auto i:n)
       {
           m=max(m,i-'0');
       }
        return m;
    }
};