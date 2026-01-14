package Java.Basic;

import java.util.Scanner;

public class Ex9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float[] grades = new float[5];
        int i;
        float maxgrade;

        for (i = 0; i < grades.length; i++) {
            grades[i] = sc.nextFloat();
        }
        maxgrade = grades[0];
        for (i = 0; i < grades.length; i++) {
            if (maxgrade <= grades[i]) {
                maxgrade = grades[i];
            }
        }

        System.out.println("The max grade is " + maxgrade);

        sc.close();

    }
}
