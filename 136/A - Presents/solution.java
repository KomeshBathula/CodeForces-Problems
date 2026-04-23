import java.util.Scanner;
 
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] arr = new int[n];
    for (int i = 0; i < n; i++) {
      arr[i] = sc.nextInt();
    }
    int[] result = new int[n];
    for (int i = 0; i < n; i++) {
      result[arr[i] - 1] = i + 1;
    }
    for (int i = 0; i < n; i++) {
      System.out.print(result[i] + " ");
    }
  }
}