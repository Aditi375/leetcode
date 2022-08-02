class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        //o(1)-->> priority queue?
        vector<int> r;
        priority_queue<int> pq;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                pq.push(matrix[i][j]);
             }
        }
        
        while(!pq.empty())
        {
            r.push_back(pq.top());
            pq.pop();
        }
        
     
        return r[r.size()-k];
    }
};