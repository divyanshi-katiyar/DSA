class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans="";
        sort(s.begin(),s.end());
        int i=0;
        while(i<s[0].length() and s[0][i]==s[s.size()-1][i]){
            ans+=s[0][i];
            i++;
        }
        return ans;
        
    }
};