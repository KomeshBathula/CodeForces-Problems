import java.util.Scanner;
 
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int tc = sc.nextInt();
    while (tc -- > 0) {
      int a = sc.nextInt();
      int b = sc.nextInt();
      if (a % b == 0 ) System.out.println(0);
      else System.out.println(b - (a % b) );
    }
  }
}