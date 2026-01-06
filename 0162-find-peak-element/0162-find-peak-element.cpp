class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start=1, end=nums.size()-2;
        if(nums.size()==1){
            return 0;
        }
        else if(nums.size()==2){
            if(nums[0]<nums[1]) return 1;
            else return 0;
        }
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[mid-1]<nums[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        if(nums[0]>nums[nums.size()-1]) return 0;
        return nums.size()-1;
    }
};