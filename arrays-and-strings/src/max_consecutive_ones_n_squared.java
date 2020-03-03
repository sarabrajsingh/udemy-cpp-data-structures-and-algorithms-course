/*
[1, 1, 1, 0, 0, 1, 1, 1, 1, 1]
*/

public class max_consecutive_ones_n_squared {
    public int findMaxConsecutiveOnes(int[] nums) {

        // find zero's and distance between them

        int maxDistance = 0;
        int counter = 0;

        for (int i = 0; i < nums.length;){
            if(nums[i] == 1){
                counter++;
                i++;
                continue;
            }else{
                if(counter > maxDistance){
                    maxDistance = counter;
                    i = i + counter;
                    counter = 0;
                }
            }
        }
        return maxDistance;
    }
}