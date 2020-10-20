import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        int cnt = 0;
        while (num != 0) {
            cnt++;
            num /= 10;
        }
        System.out.println(cnt);
    }
}