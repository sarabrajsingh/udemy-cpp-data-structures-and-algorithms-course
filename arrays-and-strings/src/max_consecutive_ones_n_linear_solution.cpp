#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

class Solution
{
    public:
        int findMaxConsecutiveOnes(vector<int> &nums)
        {
            int max_l = 0;

            int i = 0;

            while(i < nums.size())
            {
                if(nums[i] == 1)
                {
                    int curr_len = 1;
                    int r = i + 1;
                    while(r < nums.size() && nums[r] == 1)
                    {
                        curr_len++;
                        r++;
                    }
                    i = r;
                    max_l = max(max_l, curr_len);
                }
                else
                {
                    i++;
                }
            }

            return max_l;
        }
};

int main()
{
    vector<int> nums = {1,1,0,1,1,1};

    Solution sol;

    int p = sol.findMaxConsecutiveOnes(nums);

    cout << p << endl;

    return 0;
}