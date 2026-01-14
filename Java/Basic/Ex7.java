package Java.Basic;

import java.util.Scanner;

public class Ex7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float[] grades = new float[5];
        int i;

        for (i = 0; i < grades.length; i++) {
            grades[i] = sc.nextFloat();
        }

        for (i = 0; i < grades.length; i++) {
            System.out.println(grades[i]);
        }

        sc.close();

    }
}
