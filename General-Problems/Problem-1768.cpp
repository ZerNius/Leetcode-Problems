//Time Complexity: O(n)
#include <iostream>
#include <climits>
using namespace std;


class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans ="";

        int size_a = word1.size();
        int size_b = word2.size();

        int max = INT_MIN;
        if(size_a > size_b)
            max = size_a;
        else
            max = size_b;

        int ptr = 0;
        for(int i=0; i<max; i++)
        {
            if(ptr < size_a)
            {
                ans = ans + word1[ptr];
            }
            if(ptr <size_b)
            {
                ans = ans + word2[ptr];
            }
            ptr++;
        }

        return ans;
    }
};

//Driver for testing
int main()
{
    string word1, word2;
    cin>>word1>>word2;
    Solution s;
    cout<<s.mergeAlternately(word1, word2);
    return 0;
}