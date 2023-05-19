#include <iostream>
#include <vector>
using namespace std;


class Solution {
 public:
  vector<int> productExceptSelf(vector<int>& nums) {
    const int n = nums.size();
    vector<int> ans(n, 1);

    // Use ans as the prefix product array
    for (int i = 1; i < n; ++i)
      ans[i] = ans[i - 1] * nums[i - 1];

    int suffix = 1;  // Suffix product
    for (int i = n - 1; i >= 0; --i) {
      ans[i] *= suffix;
      suffix *= nums[i];
    }

    return ans;
  }
};


int main()
{
    vector<int> nums;
    int size;
    cin>>size;

    for(int i=0; i<size; i++)
    {
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }

    Solution s;
    vector<int> ans = s.productExceptSelf(nums);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
