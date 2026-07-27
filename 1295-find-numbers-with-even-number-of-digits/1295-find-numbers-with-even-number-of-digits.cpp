class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int countEle=0;
        for(int i=0; i<nums.size(); i++){
            int temp=nums[i];
            int countDig=0;
            while(temp!=0){
                int rem=temp%10;
                countDig++;
                temp/=10;
            }
            if(countDig%2==0){
                countEle++;
            }
        }
        return countEle;
    }
};