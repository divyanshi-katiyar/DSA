class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            if(nums[i]<9){
                sum+=nums[i];
                if(sum==i){
                    return i;
                }
            }
            else{
                while(nums[i]>0){
                    int rem=nums[i]%10;
                    sum+=rem;
                    nums[i]/=10;
                }
                if(sum==i){
                    return i;
                }
            }
        }
        return -1;
    }
};