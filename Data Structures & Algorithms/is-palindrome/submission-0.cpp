class Solution {
public:
    bool isPalindrome(string s) {
        string out;

        for(char c : s)
        {
            if(isalnum(c))
            {
                out += tolower(c);
            }
        }
        int n = out.size();
        for(int i = 0; i < (n/2); i++)
        {
            if(out[i] == out[n-(i + 1)])
            {
                continue;
            }else{
                return false;
            }
        }
        return true;
    }
};
