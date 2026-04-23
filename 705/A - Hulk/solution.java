import java.util.Scanner;
 
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    StringBuilder result = new StringBuilder();
    for (int i = 0; i < n; i++) {
      if (i % 2 == 0) {
        result.append("I hate ");
      } else {
        result.append("I love ");
      }
      if (i != n - 1) {
        result.append("that ");
      }
      else {
        result.append("it ");
      }
    }
    System.out.println(result.toString());
  }
}