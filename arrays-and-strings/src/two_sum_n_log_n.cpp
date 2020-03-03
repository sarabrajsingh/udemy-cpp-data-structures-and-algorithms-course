#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
    public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // use a pair to keep track of the indicies of numbers in an unsorted array
        vector<pair<int, int>> nums2;
        for(int i = 0; i < nums.size(); i++)
        {
            pair<int, int> temp(nums[i], i);
            nums2.push_back(temp);
        }

        // sort nums2
        sort(nums2.begin(), nums2.end());

        //i=0; j=n-1
        int i = 0;
        int j = nums2.size() -1;

        vector<int> temp;

        while(i<j)
        {
            if(nums2[i].first + nums2[j].first == target)
            {
                temp = {nums2[i].second, nums2[j].second};
                break;
            }
            else if (nums2[i].first + nums2[j].first > target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }

        return temp;
    }
};

int main()
{


    return 0;
}