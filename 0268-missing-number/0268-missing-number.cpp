class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        map<int, int>freq;
        if(n<2 && nums[0]!=0){
            return 0;
        }
        for(int i: nums){
            freq[i]++;
        }
        for(int i=0; i<=n; i++){
            if(freq[i]==0){
                return i;
                break;
            }
        }
        return -1;
    }
};