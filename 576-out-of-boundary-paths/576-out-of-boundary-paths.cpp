class Solution {
public:
    
    int dp[55][55][55];
    int dfs(int x,int m , int n , int i,int j)
    {
        long long mod=pow(10,9)+7;
        if(i<0||i>=m||j<0||j>=n)
        {
            return 1;
        }
        if(x<=0)
        {
            return 0;
        }
        if(dp[i][j][x]!=-1)
        {
            return dp[i][j][x];
        }
        int up=dfs(x-1,m,n,i-1,j);
        int down=dfs(x-1,m,n,i+1,j);
        int left=dfs(x-1,m,n,i,j-1);
        int right=dfs(x-1,m,n,i,j+1);
        int total=(up%mod+down%mod+left%mod+right%mod)%mod;
        dp[i][j][x]=total;
        return dp[i][j][x];
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
       
       memset(dp,-1,sizeof(dp));
      
        
      int res=dfs(maxMove,m , n ,startRow,startColumn);
        return res;
        
    }
};