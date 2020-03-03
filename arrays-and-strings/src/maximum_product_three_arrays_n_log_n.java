import java.util.Arrays;

public class maximum_product_three_arrays_n_log_n{
    public int maximumProduct(int[] nums) {

        int max_p = Integer.MIN_VALUE;

        if (nums.length <= 2) {
            return 0;
        }

        Arrays.sort(nums); // n*log(n) best case scenario

        int i = 0;
        int j = nums.length-1;

        for(int print : nums){
            System.out.print(print + ", ");
        }

        if(nums[i] < 0 && nums[i+1] < 0){
            int max_p1 = nums[i] * nums[i+1] * nums[j];
            int max_p2 = nums[j] * nums[j-1] * nums[j-2];

            if (max_p1 > max_p2){
                max_p = max_p1;
            } else {
                max_p = max_p2;
            }
        } else {
            max_p = nums[j] * nums[j-1] * nums[j-2];
        }
        return max_p;
    }
}