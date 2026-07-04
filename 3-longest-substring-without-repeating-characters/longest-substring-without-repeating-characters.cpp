class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0;
        int res=0;
        unordered_map<char,int> f;
        for(int high=0;high<s.size();high++) {
            f[s[high]]++;
            int k=high-low+1;
            while(f.size()<k) {
                f[s[low]]--;
                if(f[s[low]]==0) {
                   f.erase(s[low]); 
                }
                low++;
                k=high-low+1;   
            }
            int len=high-low+1;
            res=max(res,len);
        }
        return res;
    }
};