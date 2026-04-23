import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;
 
public class HelpfulMaths {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String str = sc.nextLine();
    ArrayList<Integer> numbers = new ArrayList<>();
    for (int i = 0; i < str.length(); i++) {
      if (Character.isDigit(str.charAt(i))) {
        numbers.add(Character.getNumericValue(str.charAt(i)));
      } 
    }
    Collections.sort(numbers);
    // System.out.println(numbers);
    int idx = 0;
    StringBuilder sb = new StringBuilder();
    for (int i = 0; i < numbers.size(); i++) {
      sb.append(numbers.get(idx++));
      if (i != numbers.size() - 1) sb.append('+');
    }
    System.out.println(sb);
    sc.close();
  }
}