import java.util.Scanner;

public class CountProgram {
    public static void main(String[] args) {
        int n;
        System.out.println("How many numbers do you want? ");
        Scanner userInput = new Scanner(System.in);
        n = userInput.nextInt();

        for(int i=0 ;i<=n; i++){
            System.out.println(i);
        }

        userInput.close();
    }
}
