class Solution {
public:
    int characterReplacement(string s, int k) {

        int result=0;

        unordered_map<char,int>mp;

        int maxf=0;

        int l=0;

        int r=0;
        while(r<s.size()){

            mp[s[r]]++;

            maxf=max(maxf,mp[s[r]]);

            if((r-l+1)-maxf<=k){

                result=max(result,r-l+1);
            }else {

                mp[s[l]]--;

                l++;
            }r++;


        }return result;
        
    }
};