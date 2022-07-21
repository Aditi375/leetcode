class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        vector<int> r;
        deque<int> q(k);
        int i;
        int n=arr.size();
        for( i=0;i<k;++i )
        {
            while(!q.empty()&&arr[i]>=arr[q.back()])
            {
                q.pop_back();
              
            }
              q.push_back(i);
        }
        for(;i<n;++i)
        {
            r.push_back(arr[q.front()]);
            
            while(!q.empty()&&q.front()<=i-k)
            {
                q.pop_front();
            }
            
            while(!q.empty()&&arr[i]>=arr[q.back()])
            {
                q.pop_back();
                
            }
            q.push_back(i);
            
        }
        r.push_back(arr[q.front()]);
        return r;
    }
};