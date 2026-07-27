class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>arr;
        for(int i=0; i<nums.size(); i++){
            if (nums[i] == 0) {
                arr.push_back(0);
                continue;
            }
            int start=arr.size();
            while(nums[i]!=0){
                int rem=nums[i]%10;
                arr.push_back(rem);
                nums[i]/=10;
            }
            reverse(arr.begin()+start, arr.end());
        }
        return arr;
    }
};