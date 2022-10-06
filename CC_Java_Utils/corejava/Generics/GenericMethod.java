package corejava.Generics;

public class GenericMethod {

    public static void main(String[] args){

        Integer[] i = {1,2,3};
        String[] s = new String[]{"Hello","World"};
        printArray(i);
        printArray(s);

    }

    static <T> void printArray(T[] arr){

            for(T t: arr){
                System.out.println(t);
            }
        
    }
    
}
