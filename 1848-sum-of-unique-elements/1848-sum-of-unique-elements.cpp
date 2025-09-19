class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int>freq;
        int sum=0;
        for(int i: nums){
            freq[i]++;
        }
        for(auto p:freq){
            if(p.second==1){
                sum += p.first;
            }
        }
        return sum;
    }
};