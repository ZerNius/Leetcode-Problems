#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> umap;
        for(int i=0; i<arr.size(); i++)
        {
                umap[arr[i]]++;
        }

        unordered_map<int, int> map;
        for(auto itr = umap.begin(); itr != umap.end(); itr++)
        {
            if(map.count(itr->second) == 0)
                map[itr->second]++;
            else
                return false;
        }
        return true;
    }
};

int main()
{
    int size;
    cin>>size;
    vector<int> arr;
    for(int i=0; i<size; i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    Solution s;
    cout<<s.uniqueOccurrences(arr);

    return 0;
}