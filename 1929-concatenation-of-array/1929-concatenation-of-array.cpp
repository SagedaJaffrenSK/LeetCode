class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>res(nums);
        for(int i=0; i<res.size(); i++){
            nums.push_back(res[i]);
        }
        return nums;
    }
};