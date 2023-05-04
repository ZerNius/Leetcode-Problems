#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int fr = 0;
        int bc = height.size() - 1;

        int max = INT_MIN;

        while(fr < bc)
        {
            int area = min(height[fr], height[bc]) * (bc - fr);
            if(max < area)
                max = area;
            if(height[fr] < height[bc])
                fr++;
            else if(height[bc] < height[fr])
                bc--;
            else
                bc--;
        }

        return max;

    }
};

//Drriver to check solution
int main()
{
    int size;
    cin>>size;

    vector<int> height;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin>>temp;
        height.push_back(temp);
    }
    
    Solution s;

    cout<<s.maxArea(height);
    return 0;
}