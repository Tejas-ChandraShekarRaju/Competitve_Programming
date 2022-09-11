import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Stack;

public class SubsetsII {

    public static void main(String[] args){
        int[] list = new int[]{1,2,3};
        System.out.println(subsetsWithDup(list));
    }
    
    public static List<List<Integer>> subsetsWithDup(int[] nums) {
        
        List<List<Integer>> result = new ArrayList<>();
        Stack<Integer> currentSet = new Stack<>();
        Arrays.sort(nums); // sorting to skip the duplicates
        helper(nums,result,currentSet,0);
        return result;
    }
    
    public static void helper(int[] nums, List<List<Integer>> result,Stack<Integer> currSet,int index){
        
        if(index == nums.length){
          result.add(new ArrayList<>(currSet));
            return;
        }
        
        // Inclusion of index
        currSet.add(nums[index]);
        helper(nums,result,currSet,index+1);
        
        // Exclusion of index
        // Before exluding skip the duplicate
        
        while(index+1 < nums.length && nums[index]==nums[index+1]){
            index+=1;
        }
        currSet.pop();
        helper(nums,result,currSet,index+1);
        
    }
}
