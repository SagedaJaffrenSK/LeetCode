class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>res;
        map<int, int>freq;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        for(auto &i: freq){
            if(i.second==1){
                res.push_back(i.first);
            }
        }
        return res;
    }
};