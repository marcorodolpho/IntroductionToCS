package Java.Basic;

import java.util.Scanner;

public class Ex6 {
    public static void main(String[] args) {
        int ofpass, trypass, i;
        Scanner sc = new Scanner(System.in);

        ofpass = 1234;
        i = 3;

        while (i > 0) {
            trypass = sc.nextInt();
            if (trypass == ofpass) {
                System.out.println("Access granted");
                break;
            } else {
                if ((i - 1) == 0) {
                    System.out.println("Acess blocked");
                    break;
                } else {
                    System.out.println("Wrong password");
                    i--;
                }
            }
        }

        sc.close();

    }
}
