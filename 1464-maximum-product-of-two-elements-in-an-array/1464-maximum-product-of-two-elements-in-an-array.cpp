class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int large=nums[0];
        int secLarge=INT_MIN;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]>large){
                secLarge=large;
                large=nums[i];
            }
            else if(secLarge<=large && nums[i]>=secLarge){
                secLarge=nums[i];
            }
        }
        int prod = (large-1)*(secLarge-1);
        return prod;
    }
};