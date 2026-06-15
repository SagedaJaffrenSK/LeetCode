class Solution {
public:
    int largest(vector<int>arr){
        int n=arr.size();
        int large = INT_MIN;
        for(int i=0; i<n; i++){
            if(arr[i]>large){
                large=arr[i];
            }
        }
        return large;
    }
    int secondLarge(vector<int>arr){
        int n=arr.size();
        int large = INT_MIN;
        int seclarge=INT_MIN;
        for(int i=0; i<n; i++){
            if(arr[i]>large){
                large=arr[i];
            }
        }
        for(int i=0; i<n; i++){
            if(arr[i]>seclarge && arr[i]!=large){
                seclarge = arr[i];
            }
        }
        return seclarge;
    }
    int dominantIndex(vector<int>& nums) {
        int max_num = largest(nums);
        int min_num = secondLarge(nums);
        if(max_num>=2*min_num){
            for(int i=0; i<nums.size(); i++){
                if(nums[i]==max_num){
                    return i;
                }
            }
        }
        return -1;
    }
};