import java.util.HashSet;
import java.util.Scanner;
 
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.nextLine(); // Consume the newline character
    String str = sc.nextLine().toLowerCase();
    HashSet<Character> set = new HashSet<>();
    for (char c : str.toCharArray()) {
      if (Character.isLetter(c)) {
        set.add(c);
      }
    }
    if (set.size() == 26) {
      System.out.println("YES");
    } else {
      System.out.println("NO");
    }
  }
}