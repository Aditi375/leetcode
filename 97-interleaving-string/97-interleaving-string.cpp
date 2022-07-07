class Solution {
public:

bool solve(string s1, string s2, string s3,vector<vector<int>>&dp,int i,int j,int k)
{
    if(i==s1.size() && j==s2.size() && k==s3.size())return true; 
    if(i>s1.size() || j>s2.size() ||k>s3.size())return false;///if any string pointer is crossed the length then return false
    if(dp[i][j]!=-1)return dp[i][j];  ///if dp[i][j] contains already value then return dp[i][j] to avoid further recursion calls
    if(s1[i]==s3[k] && s2[j]==s3[k])return dp[i][j]=solve(s1,s2,s3,dp,i+1,j,k+1) || solve(s1,s2,s3,dp,i,j+1,k+1); ////if both string character are present in final string then check indiviually
    else if(s1[i]==s3[k])return dp[i][j]=solve(s1,s2,s3,dp,i+1,j,k+1);   ///once check for s1 string and increase i++,k++
    else if(s2[j]==s3[k])return dp[i][j]=solve(s1,s2,s3,dp,i,j+1,k+1);   ///once check for s2 string and increase j++,k++
    
    else return false;
}

bool isInterleave(string s1, string s2, string s3) {
    int n=s1.length();
    int m=s2.length();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    return solve(s1,s2,s3,dp,0,0,0);
}
};