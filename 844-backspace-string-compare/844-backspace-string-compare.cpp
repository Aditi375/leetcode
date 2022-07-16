class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char> sts;
        stack<char> stt;
        string ns="";
        string nt="";
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='#'&&!sts.empty())
            {
                sts.pop();
            }
            else if(s[i]!='#')
            {
                sts.push(s[i]);
            }
        }
        for(int i=0;i<t.length();i++)
        {
            if(t[i]=='#'&&!stt.empty())
            {
                stt.pop();
            }
            else if(t[i]!='#')
            {
                stt.push(t[i]);
            }
        }
        
        while(!sts.empty())
        {
            ns=ns+sts.top();
            sts.pop();
        }
        while(!stt.empty())
        {
            nt=nt+stt.top();
            stt.pop();
        }
        cout<<ns;
        cout<<nt;
        return ns==nt;
    }
};