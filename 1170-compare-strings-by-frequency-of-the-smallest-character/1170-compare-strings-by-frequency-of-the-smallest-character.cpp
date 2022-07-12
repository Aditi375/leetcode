class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        
        vector<int> w(words.size(),1);
         vector<int> q(queries.size(),1);
        vector<int> ans(queries.size(),0);
  
        
   for(int i=0;i<words.size();i++)
   {
            string temp=words[i];
        sort(temp.begin(),temp.end());
       char r=temp[0];
       for(int j=1;j<temp.length();j++)
       {
           if(temp[j]==r)
           {
               w[i]++;
           }
       }
   }
        
        for(int i=0;i<queries.size();i++)
   {
            string temp=queries[i];
        sort(temp.begin(),temp.end());
       char r=temp[0];
       for(int j=1;j<temp.length();j++)
       {
           if(temp[j]==r)
           {
               q[i]++;
           }
       }
   }
     
       
      
        for(int i=0;i<q.size();i++)
        {
           for(int j=0;j<w.size();j++) 
           {
               if(q[i]<w[j])
               {
                   ans[i]++;
               }
           }
        }
        return ans;
        
    }
};