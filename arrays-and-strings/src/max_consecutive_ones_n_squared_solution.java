public class max_consecutive_ones_n_squared_solution {
    public int findMaxConsecutiveOnes(int[] nums) {

        int max = 0;

        for (int i = 0; i < nums.length; i++) {

            int innerCount = 0;

            if (nums[i] == 1) {
                for (int j = i; j < nums.length; j++) {
                    if (nums[j] == 1) {
                        innerCount++;
                    } else {
                        break;
                    }
                }
            }

            if (innerCount > max) {
                max = innerCount;
            }
        }
        return max;
    }
}