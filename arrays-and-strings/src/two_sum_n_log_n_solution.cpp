#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

class Solution
{
    public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ret;

        vector<pair<int, int>> nums2;

        for(int i = 0; i < nums.size(); i++)
        {
            pair<int, int> temp(nums[i], i);
            nums2.push_back(temp);
        }



        return ret;
    }
};

int main()
{
    vector<int> nums{2, 7, 11, 15};

    Solution sol;

    vector<int> solution = sol.twoSum(nums, 9);

    cout << "[ ";
    for(int i = 0; i < solution.size(); i++)
    {
        cout << solution[i] << " ";
    }
    cout << "]";

    return 0;
}