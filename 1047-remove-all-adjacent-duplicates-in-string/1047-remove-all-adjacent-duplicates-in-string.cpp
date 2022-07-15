class Solution {
public:
string removeDuplicates(string s) {
stack<int> st;
string ans = "";
for(int i=0;i<s.length();i++){
char ele = s[i];
if(st.empty()) st.push(ele);
else if(st.top()==ele) st.pop();
else st.push(ele);
}
while(!st.empty()){
ans+=st.top();
st.pop();
}
reverse(ans.begin(),ans.end());
return ans;
}
};