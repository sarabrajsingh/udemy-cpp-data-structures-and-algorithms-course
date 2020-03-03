import java.util.Map;
import java.util.TreeMap;

public class two_sum_n_log_n {

    public int[] twoSum(int[] n, int target){

        // tree maps are auto sorting dictionaries that sort in n log(n) time
        TreeMap<Integer, Integer> hmap = new TreeMap<Integer, Integer>();

        // assume array is unsorted
        // store values in a treemap for automatic sorting
        for(int i = 0; i < n.length; i++){
            hmap.put(i, n[i]);
        }

        int i = 0;
        int j = hmap.size() -1;     

        int[] temp = new int[2];

        while(i<j){
            if(hmap.get(i) + hmap.get(j) == target){
                temp[0] = i;
                temp[1] = j;
                break;
            }
            else if(hmap.get(i) + hmap.get(j) > target){
                j--;
            }
            else{
                i++;
            }
        }
        return temp;
    }
}
