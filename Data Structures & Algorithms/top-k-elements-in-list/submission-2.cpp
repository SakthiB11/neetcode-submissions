class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for (int n: nums)
        {
            mp[n]++;
        }
        vector<pair<int, int>> res;
        for(auto& pair : mp)
        {
            res.push_back({pair.first,pair.second});
        }
        sort(res.begin(),res.end(),
        [](pair<int,int> a, pair<int, int> b)
        {
            return a.second > b. second;
        }
        );
        vector<int> out;

        for(int i = 0; i < k; i++)
        {
            out.push_back(res[i].first);
        }
        return out;
    }
};
