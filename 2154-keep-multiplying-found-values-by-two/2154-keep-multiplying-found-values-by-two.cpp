class Solution {
public:
    int searching(vector<int>arr, int k){
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==k){
                return 1;
            }
        }
        return 0;
    }
    int findFinalValue(vector<int>& nums, int original) {
        int temp = original;
        int found = searching(nums, temp);
        if(found==0){
            return temp;
        }
        while(searching(nums, temp)!=0){
            temp *= 2;
        }
        return temp;
    }
};