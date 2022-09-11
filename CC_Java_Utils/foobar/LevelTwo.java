package foobar;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Stack;
import java.util.stream.Collectors;

public class LevelTwo {

    public static void main(String[] args){
        System.out.println(solution(new int[]{3,1,1,4,9,5}));
    }
    public static int solution(int[] l){
        return subsetsWithDup(l);
        
    }

   public static int subsetsWithDup(int[] nums) {
        
        List<List<Integer>> result = new ArrayList<>();
        Stack<Integer> currentSet = new Stack<>();
        Arrays.sort(nums); // sorting to skip the duplicates
        helper(nums,result,currentSet,0);
        List<Integer> maxList = new ArrayList<>();
        int ar = 0;
        for(List<Integer> list : result){
            int rem = list.stream().mapToInt(a->a).sum() % 3;
                if(rem == 0){
                    if(maxList.size()<= list.size()){
                        int temp = decide(maxList,list);
                        if(ar!=temp){
                            ar = temp;
                            maxList = list;
                        }
                    }
                    
                }
        }
        return ar;
    }
    
    public static int decide(List<Integer> currMax, List<Integer> currList){
        int result = 0;
        String currM = currMax.stream()
                            .map(Object::toString)
                            .collect(Collectors.joining(""));
        int max = currM.isEmpty() ? 0 : Integer.parseInt(currM);
        String currL = currList.stream()
                               .map(Object::toString)
                               .collect(Collectors.joining(""));
        int curr = currL.isEmpty() ? 0 : Integer.parseInt(currL);
        result = max>=curr ? max : curr;
            if(curr>=max){
                StringBuilder sb = new StringBuilder(currL);
                sb.reverse();
                result = currL.isEmpty() ? 0 : Integer.parseInt(sb.toString());
            }
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