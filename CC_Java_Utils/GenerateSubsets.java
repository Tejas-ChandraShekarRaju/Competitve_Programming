import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class GenerateSubsets {

    public static void main(String[] args) {
        List<Integer> list = new ArrayList<>(Arrays.asList(1,2,3));
        System.out.println(solution(list));
    }

    static List<List<Integer>> solution(List<Integer> list){
        List<List<Integer>> resultList = new ArrayList<>();
        List<Integer> currentSet = new ArrayList<>();
        helper(list,resultList,0,currentSet);
        return resultList;
        
    }

    static void helper(List<Integer> list,List<List<Integer>> resultList,int start,List<Integer> currentSet){
            if(list.size() <= 0) return;
            if(start == list.size()){
                resultList.add(new ArrayList<>(currentSet));
                return;
            } 
            currentSet.add(list.get(start));
            helper(list, resultList, start+1,currentSet);
            currentSet.remove(list.get(start));
            helper(list, resultList, start+1,currentSet);
    }
    
}
