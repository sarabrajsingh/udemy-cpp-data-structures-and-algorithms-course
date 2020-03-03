#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

class Solution
{
    public:
        int findMaxConsecutiveOnes(vector<int> &nums)
        {
            int max_l = INT_MIN; // always best practise to assign a max value to positive infinity

            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == 1)
                {
                    int current_len = 1;
                    int r = i + 1;

                    while (r < nums.size() && nums[r] == 1) // will break when a zero is reached
                    {
                        current_len++;
                        r++;
                    }
                    max_l = max(max_l, current_len); // in cpp std library
                }
            }

            return max_l;
        }
};

int main()
{
    return 0;
}