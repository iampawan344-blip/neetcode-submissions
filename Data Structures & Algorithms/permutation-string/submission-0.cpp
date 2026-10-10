class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        if(s1.size()>s2.size())return false;

        for(int i=0;i<=s2.size()-s1.size();i++){
            string str="";
            for(int j=i;j<s1.size()+i;j++){
                str+=s2[j];

            }sort(str.begin(),str.end());
            if(str==s1)return true;
        }return false;
        
    }
};