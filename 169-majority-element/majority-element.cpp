class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> f;
        for(int i=0;i<n;i++){
            f[nums[i]]++;
            if(f[nums[i]]>n/2){
                return nums[i];
            }
        }
        return -1;
    }
};