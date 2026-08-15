class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high= nums.size()-2;
        if(nums.size()==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[high]!=nums[high+1]) return nums[high+1];
        while(low<=high){
            int mid=(high-low)/2+low;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                return nums[mid];
            }
            if(mid%2==0 && nums[mid]==nums[mid+1] || mid%2==1 && nums[mid]==nums[mid-1]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};