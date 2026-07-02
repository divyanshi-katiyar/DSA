class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n = arr.size();
        int low=0;
        int high=0;
        int res=INT_MAX;
        int sum=0;

        while(high<n) {
            sum=sum+arr[high];
            while(sum>=target) {
                int len=high-low+1;
                res=min(res,len);
                sum=sum-arr[low];
                low++;
            }
            high++;
        }
        if(res==INT_MAX) {
            return 0;
        }
        else{
            return res;
        }
    }
};
