class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        priority_queue<pair<int, int>> pq;

        for (auto &i : freq) {
            pq.push({i.second, i.first});
        }

        vector<int> ans;

        while (k--) {
            int temp = pq.top().second;
            pq.pop();
            ans.push_back(temp);
        }
        return ans;
    }
};