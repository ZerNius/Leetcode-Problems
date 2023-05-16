#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        vector<int> :: iterator itr = flowerbed.end(); 
        
        //n == 0 
        if(n == 0)
            return true;
        if(flowerbed.size() == 0)
            return false;

        //single element array
        if(n == 1 && *itr == 1)
            return false;
        else if(n == 1 && *itr == 0)
            return true;
        
        if((n-1) * 2 + 1 > flowerbed.size())
            return false;
        //back case
        if(*itr-- == 0 && (*(itr--) == 0))
            n--;

        //front case
        itr = flowerbed.begin();
        if(*itr == 0 && (*(itr++) == 0))
            n--;
        for(; itr!= flowerbed.end()-1; itr++)
        {
            if(n == 0)
                return true;
            vector<int> :: iterator cur = itr;
            if(*itr == 0 && (*itr-- ==0) && (*(itr = itr+2) == 0))
                n--;
            else
                itr = cur;
        }   
        return false;
    }
};

int main()
{
    vector<int> flowerbed;
    int size;
    cin>>size;

    for(int i=0; i<size; i++)
    {
        int temp;
        cin>>temp;
        flowerbed.push_back(temp);
    }

    int n;
    cin>>n;

    Solution s;
    cout<<s.canPlaceFlowers(flowerbed, n);
    return 0;
}