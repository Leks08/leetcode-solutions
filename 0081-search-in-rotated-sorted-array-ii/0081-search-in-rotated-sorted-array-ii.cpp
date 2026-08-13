class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n= nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid= (high-low)/2+low;
            if(nums[mid]==target){
                return true;
            }
            if(nums[mid]==nums[low] && nums[high]==nums[mid]){
                low++;
                high--;
            }
            else if(nums[mid] >= nums[low]){
                if(nums[low] <= target && target <nums[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(target>nums[mid] && nums[high]>=target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return false;
    }
};