//Solution to Problem-205
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> m;
        unordered_map<char, char> n;

        if(s.size() != t.size())
        {
            return false;
        }

        for(int i=0; i<s.size(); i++)
        {
            char a = s.at(i);
            char b = t.at(i);

            if(m.count(a) == 0)
            {
                m[a] = b;
            }
            else
            {
                unordered_map<char, char> :: iterator itr;
                itr = m.find(a);

                if(itr->second != b)
                {
                    return false;
                }   
            }
        }
        for(int i=0; i<s.size(); i++)
        {
            char a = s.at(i);
            char b = t.at(i);

            if(n.count(b) == 0)
            {
                n[b] = a;
            }
            else
            {
                unordered_map<char, char> :: iterator itr;
                itr = n.find(b);

                if(itr->second != a)
                {
                    return false;
                }   
            }
        }
        return true;

    }
};