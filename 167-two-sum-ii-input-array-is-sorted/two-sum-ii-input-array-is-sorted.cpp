class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0;
        int right=n-1;

        while(left<right) {
            if(nums[left]+nums[right]==target) {
                return{left+1,right+1};
            }
            else if(nums[left]+nums[right]>target) {
                right--;
            }
            else {
                left++;
            }
        }
        return {};
    }
};