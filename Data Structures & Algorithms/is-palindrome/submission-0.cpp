class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(auto &it:s){
            if(isalnum(it))
            str+=tolower(it);
        }string p=str;
        reverse(p.begin(),p.end());
        return p==str;
        
    }
};
