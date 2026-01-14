package Java.Basic;

import java.util.Scanner;

public class ex2 {
    public static void main(String[] args) {
        Scanner sn = new Scanner(System.in);

        System.out.println("Type your grade: ");
        float grade = sn.nextFloat();

        if (grade >= 0 && grade <= 10) {
            if (grade > 5) {
                System.out.println("Passed");
            } else if (grade == 5) {
                System.out.println("Recovery");
            } else {
                System.out.println("Failed");
            }
        }

        sn.close();
    }
}
