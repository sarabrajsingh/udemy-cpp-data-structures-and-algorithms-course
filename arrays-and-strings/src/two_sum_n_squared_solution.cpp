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
        // nums.size() >=2 always
        for(int i = 0; i < nums.size(); ++i)
        {
            for(int j = i; j < nums.size(); ++j)
            {
                if(i != j)
                {
                    if( nums[i] + nums[j] == target)
                    {
                        ret.push_back(i);
                        ret.push_back(j);
                    }
                }
            }
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