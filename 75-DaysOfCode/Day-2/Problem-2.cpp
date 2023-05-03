//Solution for Problem-393
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        while(i<s.size() && j<t.size())
        {
            if(s[i] == t[j])
            {
                i++;
                j++;
            }
            else if(s[i] != t[j])
            {
                j++;
            }
        }
        int size = s.size() - 1;
        if(i > size)
            return true;
        else
            return false;
    }

};