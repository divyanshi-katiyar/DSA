class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int maxi=nums[0];
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
        }
        for(int i=0;i<n;i++){
            while(nums[i]<maxi){
                nums[i]++;
                count++;
            }
        }
        return count;
    }
};