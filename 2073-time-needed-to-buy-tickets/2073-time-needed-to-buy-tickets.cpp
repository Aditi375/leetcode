class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        //person can buy one ticket at a time , go at the back
        //no ticket left- pop
        
        //use a deque
        int count=0;
        //untill nums[k]!=0 run the conditions
        
        
        queue<int> q;
        
        for(int i=0;i<tickets.size();i++)
        {
            q.push(i);
        }
        
    while(tickets[k]!=0)
    {
        
        count++;
       
       int p=q.front(); 
        q.pop();
        
        if(tickets[p]) tickets[p]--;
        if(tickets[p]) q.push(p);
        if(p==k&&tickets[p]==0) return count;
    }
        
        return count;
    }
};