package Java.Basic;

import java.util.Scanner;

public class Ex4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float grade;

        System.out.println("Type your grade (0-10): ");
        grade = sc.nextFloat();

        while (grade < 0 || grade > 10) {
            System.out.println("Invalid Grade. Type again");
            grade = sc.nextFloat();
        }

        System.out.println("Valid Grade.");
        sc.close();
    }
}
