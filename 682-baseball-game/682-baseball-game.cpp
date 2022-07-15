class Solution {
public:
    int calPoints(vector<string>& ops) {
        int res=0;
        stack<int> s;
      
        for(int i=0;i<ops.size();i++)
        {
          if(ops[i]=="+")  
          {
              int t=s.top();
              s.pop();
              int r=s.top();
              s.pop();
              int sum=t+r;
              s.push(r);
              s.push(t);
              s.push(sum);
              res=res+sum;
          }
           else if(ops[i]=="D")
             {
                 int temp=s.top();
                 temp=2*temp;
                 s.push(temp);
                 res+=temp;
             }
            else if(ops[i]=="C")
             {
                 int dl=s.top();
                 s.pop();
                 res-=dl;
             }
             else
             {
                 int num=stoi(ops[i]);
                 s.push(num);
                 res=res+num;
             }
             
        }
        return res;
             
            
    }
};
