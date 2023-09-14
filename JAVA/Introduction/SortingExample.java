
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import java.util.Collections;

public class SortingExample {
    public static void main(String[] args) {
        List<Integer> inputList = new ArrayList<>();
        inputList.add(10);
        inputList.add(10);
        inputList.add(50);
        inputList.add(20);
        inputList.add(45);
        inputList.add(60);
        inputList.add(25);
        inputList.add(25);
        inputList.add(90);

       // Step 1: Remove duplicates using a HashSet
       Set<Integer> uniqueSet = new HashSet<>(inputList);
       inputList.clear();
       inputList.addAll(uniqueSet);

       // Step 2: Sort the modified ArrayList
       Collections.sort(inputList);

       // Step 3: Print the sorted ArrayList with duplicates removed
       System.out.println("Output with duplicates removed: " + inputList);
    }
}
