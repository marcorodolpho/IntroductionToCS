package Java.Basic;

import java.util.Scanner;

public class Ex8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float[] grades = new float[5];
        float media = 0;
        int i;

        for (i = 0; i < grades.length; i++) {
            grades[i] = sc.nextFloat();
            media = media + grades[i];
        }

        media = media / 5;

        System.out.println("The average of the grades is " + media);

        sc.close();

    }
}
