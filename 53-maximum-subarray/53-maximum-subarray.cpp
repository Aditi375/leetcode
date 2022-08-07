class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int mx=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
           sum+=nums[i];
            mx=max(sum,mx);
            sum=max(sum,0);
        }
    
    return mx;
    }
};