class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int> freq;

        for(int x:nums){
            freq[x]++;
        }

        set<vector<int>> ans;

        for (int i = 0; i < n; i++)
        {
            freq[nums[i]]--;

            for (int j = i + 1; j < n; j++)
            {
                freq[nums[j]]--;

                int y = 0 - nums[i] - nums[j];
  
                if (freq[y] > 0)
                {
                    vector<int> triplet = {nums[i], nums[j], y};
                
                    sort(triplet.begin(), triplet.end());

                    ans.insert(triplet);
                }

                freq[nums[j]]++;
            }

            freq[nums[i]]++;
        }
        vector<vector<int>> uniqueAns(ans.begin(), ans.end());

        return uniqueAns;
    }
};
