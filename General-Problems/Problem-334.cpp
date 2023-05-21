#include <iostream>
#include <vector>
using namespace std;


class Solution {
 public:
  bool increasingTriplet(vector<int>& nums) {
    int first = INT_MAX;
    int second = INT_MAX;

    for (const int num : nums)
      if (num <= first)
        first = num;
      else if (num <= second)  // First < num <= second
        second = num;
      else
        return true;  // First < second < num (third)

    return false;
  }
};


//Driver code for testing
int main()
{
    int size;
    cin>>size;

    vector<int> nums;
    for(int i=0; i<size; i++)
    {
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }

    Solution s;
    cout<<s.increasingTriplet(nums);

    return 0;
}