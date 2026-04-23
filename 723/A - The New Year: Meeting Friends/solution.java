public class Main {
  public static void main(String[] args) {
    java.util.Scanner sc = new java.util.Scanner(System.in);
    int a = sc.nextInt();
    int b = sc.nextInt();
    int c = sc.nextInt();
    int[] arr = {a, b, c};
    java.util.Arrays.sort(arr);
    System.out.println(arr[1] - arr[0] + arr[2] - arr[1]);
    sc.close();
  }
}