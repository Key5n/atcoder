import java.util.Scanner;

public class a {
    public static void main(String[] args) {
        Scanner stdIn = new Scanner(System.in);
        String s = stdIn.nextLine();
        char c1 = s.charAt(0);
        char c2 = s.charAt(1);
        char c3 = s.charAt(2);
        int count = 0;
        char res = c1;

        if (c1 == c2) {
            count++;
            res = c3;
        }
        if (c1 == c3) {
            count++;
            res = c2;
        }
        if (c2 == c3) {
            count++;
            res = c1;
        }
        if (count == 0 || count == 1) {
            System.out.println(res);
        } else {
            System.out.println(-1);
        }
    }
}
