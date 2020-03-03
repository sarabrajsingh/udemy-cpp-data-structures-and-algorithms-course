public class maximum_product_three_arrays_n_cubed {
    public int maximumProduct(int[] nums) {

        int max_p = Integer.MIN_VALUE;

        if (nums.length <= 2) {
            return 0;
        }

        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                for (int k = j + 1; k < nums.length; k++) {
                    if ((nums[i] * nums[j] * nums[k]) > max_p) {
                        max_p = (nums[i] * nums[j] * nums[k]);
                    }
                }
            }
        }
        return max_p;
    }
}