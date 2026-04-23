import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        while (tc -- > 0) {
            String str = sc.next();
            if (str.length() > 10) {
                StringBuilder sb = new StringBuilder();
                sb.append(str.charAt(0));
                sb.append(str.length() - 2);
                sb.append(str.charAt(str.length() - 1));
                System.out.println(sb);
            }
            else 
                System.out.println(str);
        }
    }
}