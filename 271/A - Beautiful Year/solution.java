import java.util.Scanner;
 
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int year = sc.nextInt();
    year++;
    while (true) {
      String y = Integer.toString(year);
      if (y.charAt(0) != y.charAt(1) && y.charAt(0) != y.charAt(2) && y.charAt(0) != y.charAt(3) &&
          y.charAt(1) != y.charAt(2) && y.charAt(1) != y.charAt(3) &&
          y.charAt(2) != y.charAt(3)) {
        System.out.println(year);
        break;
      }
      year++;
    }
    sc.close();
  }
}