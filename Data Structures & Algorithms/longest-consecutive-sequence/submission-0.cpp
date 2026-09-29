class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 0;

        for (int x : st) {

            if (!st.contains(x - 1)) {

                int length = 1;

                while (st.contains(x + length)) {
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};