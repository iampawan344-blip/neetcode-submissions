class Solution {
public:
    string minWindow(string s, string t) {


        unordered_map<char,int>mp;
        for(auto &x:t){

            mp[x]++;
        }
        int requiredcount=t.size();
        int i=0;
        int j=0;
        int start_i=0;
        int n=s.size();
        int result=INT_MAX;
        int minsize=INT_MAX;
        if(t.size()>s.size())return "";
        while(j<n){

            char ch=s[j];
            if(mp[ch]>0)requiredcount--;
            mp[ch]--;
            while(requiredcount==0){

                int currsize=j-i+1;
                if(minsize>currsize){
                    minsize=currsize;
                    start_i=i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0)requiredcount++;
                i++;
            }j++;
        }if(minsize<INT_MAX)return s.substr(start_i,minsize);
        return "";


        
    }
};
