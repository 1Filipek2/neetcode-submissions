class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;

        for(auto& num : nums) {
            count[num]++;
        }

        vector<pair<int, int>> vec;

        for(auto& [num, freq] : count) {
            vec.push_back({freq, num});
        }

        sort(vec.begin(), vec.end(), greater<>());

        vector<int> result;

        for(int i = 0; i < k; i++) {
            result.push_back(vec[i].second);
        }
        return result;
    }
};
