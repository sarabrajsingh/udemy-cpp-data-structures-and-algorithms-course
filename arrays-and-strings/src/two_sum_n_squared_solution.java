public class two_sum_n_squared_solution {
    static class Solution {
        public int[] twoSum(int[] nums, int target) {

            int[] returnMe = new int[2];

            for (int i = 0; i < nums.length; i++) {
                for (int j = i; j < nums.length; j++) {
                    if (i != j) {
                        if (nums[i] + nums[j] == target) {
                            returnMe[0] = i;
                            returnMe[1] = j;
                        }
                    }
                }
            }

            return returnMe;
        }
    }

    public static void main(String[] args) {
        int[] nums = {2, 7, 11, 15};
        Solution newSolution = new Solution();

        int[] response = newSolution.twoSum(nums, 9);

        System.out.print("[ ");
        for(int i : response){
            System.out.print(i + " ");
        }
        System.out.print("]");
    }
}