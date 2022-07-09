class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        
        int n=boxes.length();
        vector<int> r(n,0);
        
        
        
        for(int i=0;i<boxes.length();i++)
        {
            for(int j=0;j<boxes.length();j++)
            {
                if(boxes[j]=='1'&&i!=j)
                {
                    r[i]=r[i]+abs(j-i);
                }
            }
        }
        
        return r;
    }
};