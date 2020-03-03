public class max_consecutive_ones_n_linear_solution{
    public int findMaxConsecutiveOnes(int[] nums) {

        int max_l = Integer.MIN_VALUE;
        int i = 0;

        while(i < nums.length){
            if(nums[i] == 1){
                int curr_length = 1;
                int nextZeroIterator = i + 1;
                while(nextZeroIterator < nums.length && nums[nextZeroIterator] == 1){
                    nextZeroIterator++;
                    curr_length++;
                }
                i = nextZeroIterator;
                if(curr_length > max_l) max_l = curr_length;
            } else {
                i++;
            }
        }
        return max_l;
    }
}