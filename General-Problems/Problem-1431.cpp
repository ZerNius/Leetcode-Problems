#include <iostream>
#include <climits>
#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int max = INT_MIN;

        for(int i=0; i<candies.size(); i++)
        {
            if(max < candies[i])
                max = candies[i];
        }
        for(int i=0; i<candies.size(); i++)
        {
            if(candies[i] + extraCandies < max)
                result.push_back(false);
            else
                result.push_back(true);
        }

        return result;
    }
};


//Driver for testing code
//Input sequence: size-of-vector, vector-values, extra-candies-value
int main()
{
    vector<int> candies;
    int extracandies;
    int size;
    cin>>size;

    for(int i=0; i<size; i++)
    {
        int temp;
        cin>>temp;
        candies.push_back(temp);
    }

    cin>>extracandies;

    Solution s;
    vector<bool> b = s.kidsWithCandies(candies, extracandies); 

    for(auto itr = b.begin(); itr<b.end(); itr++)
    {
        if(*itr == 1)
            cout<<"true"<<" ";
        else
            cout<<"false"<<" ";
    }

    return 0;
}