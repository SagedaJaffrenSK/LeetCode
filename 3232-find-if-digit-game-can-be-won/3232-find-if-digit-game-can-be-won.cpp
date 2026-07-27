class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1=0, sum2=0;
        for(int i=0; i<nums.size(); i++){
            int count=0;
            int temp=nums[i];
            while(temp!=0){
                int rem=temp%10;
                count++;
                temp/=10;
            }
            if(count==1){
                sum1 += nums[i];
            }
            else{
                sum2 += nums[i];
            }
        }
        if(sum1>sum2 || sum1<sum2){
            return true;
        }
        return false;
    }
};