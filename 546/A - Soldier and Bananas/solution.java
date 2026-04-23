import java.util.Scanner;
 
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int k = sc.nextInt();
    int n = sc.nextInt();
    int w = sc.nextInt();
    int totalCost = 0;
    for (int i = 1; i <= w; i++) {
      totalCost += i * k;
    }
    System.out.println(totalCost > n ? totalCost - n : 0);
    sc.close();
  }
}