import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        StringBuilder sb = new StringBuilder();
        int i = 0;
        while (i < s.length()) {
            if (s.charAt(i) == '.') {
                sb.append('0');
                i++;
            } else if (s.charAt(i) == '-') {
                if (s.charAt(i + 1) == '.') {
                    sb.append('1');
                } else {
                    sb.append('2');
                }
                i += 2;
            }
        }
        System.out.println(sb.toString());
        sc.close();
    }
}