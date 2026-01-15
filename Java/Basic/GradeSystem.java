package Java.Basic;

import java.util.Scanner;

public class GradeSystem {
    public static void main(String[] args) {

        Scanner sn = new Scanner(System.in);

        float[] grades = new float[5];
        int option = 4;

        while (option != 0) {
            System.out.println("1 - Add grades");
            System.out.println("2 - Show grades");
            System.out.println("3 - Get an average");
            System.out.println("0 - Exit");

            option = sn.nextInt();

            if (option == 1) {
                addGrade(grades, sn);
            } else if (option == 2) {
                showGrades(grades);
            } else if (option == 3) {
                System.out.println(average(grades));
            }
        }

        sn.close();
    }

    public static void addGrade(float[] grades, Scanner sn) {
        int i;
        for (i = 0; i < grades.length; i++) {
            System.out.println("Type grade " + (i + 1) + ":");
            grades[i] = sn.nextFloat();
        }
    }

    public static void showGrades(float[] grades) {
        int i;
        for (i = 0; i < grades.length; i++) {
            System.out.println("Grade " + (i + 1) + ": " + grades[i]);
        }
    }

    public static float average(float[] grades) {
        int i;
        float avg = 0;
        for (i = 0; i < grades.length; i++) {
            avg = avg + grades[i];
        }

        return avg / grades.length;
    }
}
