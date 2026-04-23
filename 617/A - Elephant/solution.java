import java.util.Scanner;
 
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int x = sc.nextInt();
    int minSteps = 0;
    while (x > 0) {
      if (x >= 5) {
        x -= 5;
      } else if (x >= 4) {
        x -= 4;
      } else if (x >= 3) {
        x -= 3;
      } else if (x >= 2) {
        x -= 2;
      } else {
        x -= 1;
      }
      minSteps++;
    }
    System.out.println(minSteps);
    sc.close();
  }
}