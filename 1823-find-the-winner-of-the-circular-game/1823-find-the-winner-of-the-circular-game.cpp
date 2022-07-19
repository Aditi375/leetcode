class Solution {
public:
    int findTheWinner(int n, int k) {
      //use a queue if i!=k pop the element and push it into stack
        queue<int> q;
        for(int i=1;i<=n;i++)
        {
            q.push(i);
        }
         int i=1;
        while(q.size()!=1)
        {
           
            if(i!=k)
            {
               
                int temp=q.front();
                q.pop();
                q.push(temp);
                 i++;
            }
            else
            {
                q.pop();
                i=1;
            }
        }
        return q.front();
    }
};