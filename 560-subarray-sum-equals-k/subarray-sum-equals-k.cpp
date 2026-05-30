class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int> mpp;
       mpp[0]=1; 

       int ps=0;
       int count=0;

       for(int i=0;i<nums.size();i++) {
            ps+=nums[i]; //Prefix Sum Calculated
            int remove=ps-k;
            count+=mpp[remove];
            mpp[ps]+=1;
       }
       return count;
    }
};