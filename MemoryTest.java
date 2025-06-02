
import java.util.ArrayList;

public class MemoryTest {
    public static void main(String[] args) {
        ArrayList<Integer> numbers = new ArrayList<>();
        for (int i = 0; i < 1_000_000; i++) {
            numbers.add(i);
        }
        System.out.println("Sum: " + numbers.stream().mapToInt(Integer::intValue).sum());
        numbers = null;
        System.gc();
    }
}
