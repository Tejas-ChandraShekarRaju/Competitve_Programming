package advancedjava.collections;

import java.util.HashMap;
import java.util.Map;

public class HashMapExample {

    public static void main(String[] args){
        int[] list = {1,2,3,1};
        Map<Integer,Integer> freq = new HashMap<>();

        for(int x:list){
            if(freq.containsKey(x)){
                freq.put(x,freq.get(x)+1);
            }
            else{
                freq.put(x,1);
            }
        }

       for(Map.Entry<Integer,Integer> m:freq.entrySet()){
         System.out.println("Key "+m.getKey()+" value"+m.getValue());
       }
    }
    
}
