class Solution {
public:
    string simplifyPath(string path) {
        string result="";
        stack<string>st;
        stringstream ss(path);
        while(getline(ss,result,'/')){
            if(result==""||result==".")continue;
            else if(result==".."){
                if(!st.empty())
                st.pop();
            }else st.push(result);
        }string ans=""; if(st.empty()) return "/";
        while(!st.empty()){
            ans="/"+st.top()+ans;st.pop();
        }
       return ans;
        
    }
};