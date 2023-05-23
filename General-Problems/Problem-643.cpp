#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution {
 public:
  double findMaxAverage(vector<int>& nums, int k) {
    double sum = accumulate(begin(nums), begin(nums) + k, 0);
    double ans = sum;

    for (int i = k; i < nums.size(); ++i) {
      sum += nums[i] - nums[i - k];
      ans = max(ans, sum);
    }

    return ans / k;
  }
};

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

    int k;
    cin>>k;
    Solution s;
    cout<<s.findMaxAverage(nums, k);

    return 0;
}
