// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    stack<int>primary;
    stack<int>secondary;
    
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           return secondary.size()!=0?secondary.top():-1;
           
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           if(primary.size()==0)
           {
               return -1;
           }
           int top=primary.top();
           if(secondary.size()!=0 && secondary.top()==top)
           {
               secondary.pop();
           }
           primary.pop();
           return top;
           
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           primary.push(x);
           if(secondary.size()==0 || secondary.top()>=x)
           {
               secondary.push(x);
           }
           
           return;
          
       }
};

// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends