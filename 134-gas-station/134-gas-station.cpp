class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
         int start=0;
       int b=0;
       int d=0;
       
       for(int i=0;i<n;i++)
       {
           b+=gas[i]-cost[i];
           
           if(b<0)
           {
               d+=b;
               start=i+1;
               b=0;
           }
       }
       
       if(b+d>=0)
       {
           return start;
       }
       return -1;
    }
};