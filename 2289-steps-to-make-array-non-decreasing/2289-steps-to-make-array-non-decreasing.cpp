class Solution {
public:
    int totalSteps(vector<int>& nums) {
        int ans=0;
        stack<pair<int,int>> st;
       
       
        for(int i=0;i<nums.size();i++)
        {
            int cnt=0;
            
            while(!st.empty()&&st.top().first<=nums[i])
            {
                cnt=max(cnt,st.top().second);
                st.pop();
            }
            if(!st.empty())
            {
                cnt=cnt+1;
            }
            else
            {
                cnt=0;
            }
            ans=max(cnt,ans);
            st.push({nums[i],cnt});
        }
        return ans;
    }
};