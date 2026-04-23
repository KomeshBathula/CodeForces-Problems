import java.util.Scanner;
 
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int p1 = sc.nextInt();
    boolean[] levels = new boolean[n + 1];
    for (int i = 0; i < p1; i++) {
      int level = sc.nextInt();
      levels[level] = true;
    }
    int p2 = sc.nextInt();
    for (int i = 0; i < p2; i++) {
      int level = sc.nextInt();
      levels[level] = true; 
    }
    for (int i = 1; i <= n; i++) {
      if (!levels[i]) {
        System.out.println("Oh, my keyboard!");
        return;
      }
    }
    System.out.println("I become the guy.");
  }
}