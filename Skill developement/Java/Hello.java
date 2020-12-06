/**
 * Hello
 */
import java.util.Scanner;
public class Hello {

    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        System.out.println("HELLO");
        System.out.println("Hello "+keyboard.nextLine());
        keyboard.close();
    }
}