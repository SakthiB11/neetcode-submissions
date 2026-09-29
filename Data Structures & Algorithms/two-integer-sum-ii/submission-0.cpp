class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int left = 0,right = num.size() - 1;
        
        while(left < right)
        {
            int sum = num[left] + num[right];
            if(sum < target)
            {
                left++;
            }else if(sum > target){
                right--;
            }else{
                return {left + 1,right + 1};
            }
        }
        
    }
};
