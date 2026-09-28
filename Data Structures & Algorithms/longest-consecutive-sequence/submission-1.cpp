class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet;

        for (const int& x : nums)
        {
            numSet.insert(x);
        }

        int maxCount = 0;
        for (const int& x : nums)
        {
            if (numSet.find(x - 1) == numSet.end())
            {
                int current = x;
                int count = 1;

                while (numSet.count(current + 1))
                {
                    current++;
                    count++;
                }

                maxCount = max(maxCount, count);
            }
        }
        return maxCount;
    }
};
