class Solution {
public:
    vector<int> targetIndices(vector<int>& arr, int target) {
        vector<int>res;
        sort(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==target){
                res.push_back(i);
            }
        }
        return res;
    }
};