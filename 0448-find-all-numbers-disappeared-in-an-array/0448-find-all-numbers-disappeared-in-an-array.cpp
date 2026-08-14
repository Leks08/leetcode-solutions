class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        int k=1;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int idx=abs(nums[i])-1;
            if(nums[idx]>0){
                nums[idx]=-nums[idx];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                arr.push_back(i+1);
            }
        }
        return arr;
    }
};