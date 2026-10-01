#include <bit>

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n + 1);

        for(unsigned int i = 0;i <= n; i++){
            int temp = popcount(i);

            res[i] = temp;
        }
        return res;
    }
};
