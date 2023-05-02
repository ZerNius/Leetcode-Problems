//Solution to Problem-724
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int total = 0;

        for(int i=0; i<nums.size(); i++)
            total += nums[i];
        
        for(int i=0; i<nums.size(); i++)
        {
            if(sum == total - sum - nums[i]){
                return i;
            }

            sum += nums[i];
        }
        return -1;
    }
};