class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low1=0, high1=nums.size()-1;
        int first=-1;
        while(low1<=high1){
            int mid = low1 + (high1-low1) / 2;
            if(nums[mid]==target){
                first=mid;
                high1=mid-1;
            }
            else if(target>nums[mid]){
                low1=mid+1;
            }
            else if(target<nums[mid]){
                high1=mid-1;
            }
        }
        int low2=0, high2=nums.size()-1;
        int last=-1;
        while(low2<=high2){
            int mid = low2 + (high2-low2) / 2;
            if(nums[mid]==target){
                last=mid;
                low2=mid+1;
            }
            else if(target<nums[mid]){
                high2=mid-1;
            }
            else if(target>nums[mid]){
                low2=mid+1;
            }
        }
        return {first, last};
    }
};