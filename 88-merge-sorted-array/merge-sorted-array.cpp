class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp(nums1.begin(),nums1.begin()+m); //Copy only valid elements from nums 1 into temp
        int i=0;
        int j=0;
        int index=0;

        while(i<m && j<n){
           if(temp[i]<nums2[j]){
                nums1[index]=temp[i];
                i++;
                index++;
           }
           else{
                nums1[index]=nums2[j];
                j++;
                index++;
           }
        }
        while(i<m){
            nums1[index]=temp[i];
            i++;
            index++;
        }
        while(j<n){
            nums1[index]=nums2[j];
            j++;
            index++;
        }
        for(int i=0;i<n;i++){
            cout<<nums1[i];
        }
    }
};