package Java.Basic;

import java.util.Scanner;

public class ex1 {

    public static void main(String[] args) {
        Scanner sn = new Scanner(System.in);

        System.out.println("Type your name: ");
        String nome = sn.nextLine();

        System.out.println("Type your age: ");
        int idade = sn.nextInt();

        System.out.println("Hi " + nome);
        System.out.println("You are " + idade + " years old.");

        sn.close();

    }
}
