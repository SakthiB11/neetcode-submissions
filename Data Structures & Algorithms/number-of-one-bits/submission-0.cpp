#include <bit>;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = popcount(n);
        return res;
    }
};
