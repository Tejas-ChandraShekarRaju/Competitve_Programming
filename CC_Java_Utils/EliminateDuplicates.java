import java.util.LinkedHashSet;
import java.util.Arrays;
import java.util.Set;
import java.util.stream.Collectors;
import java.util.List;

class EliminateDuplicates {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
        String[] s = new String[]{"A","B","C","C"};
        // Example one using set
        Set<String> linkedSet = new LinkedHashSet<>();
        linkedSet.addAll(Arrays.asList(s));
        System.out.println(linkedSet.size());
        // Example two using streams API
        List<String> newList = (Arrays.asList(s)).stream().distinct().collect(Collectors.toList());
        System.out.println(newList.size());
    }
}