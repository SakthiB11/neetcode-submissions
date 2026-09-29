class Solution {
public:

    string encode(vector<string>& strs) {
        string enc;
        for (string s : strs)
        {
            int len = s.size();
            enc += to_string(len) + "@" + s;
        }
        return enc;
    }

    vector<string> decode(string s) {
        vector<string> dec;
        int i = 0;

        while(i < s.size())
        {
            int j = i;
            while (s[j] != '@')
            {
                j++;
            }

            int len = stoi(s.substr(i,j- i));

            j++;

            dec.push_back(s.substr(j,len));

            i = j + len;
        }
        return dec;
    }
};
