class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxi=1;
        int n= nums.size();
        int count=1;
        if(n==0) return 0;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                count++;
            }
            else{
                count=1;
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};