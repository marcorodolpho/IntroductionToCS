package Java.Basic;

import java.util.Scanner;

public class Ex5 {
    public static void main(String[] args) {
        int num, count;

        Scanner sc = new Scanner(System.in);
        System.out.println("Type ana positive Int Number: ");
        num = sc.nextInt();

        while (num <= 0) {
            System.out.println("Invalid Number! Type again.");
            num = sc.nextInt();
        }

        for (count = 1; count <= num; count = count + 1) {
            System.out.println(count);
        }

        sc.close();

    }
}
