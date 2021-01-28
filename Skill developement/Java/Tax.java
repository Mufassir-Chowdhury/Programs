import java.util.Scanner;

public class Tax {
    public static void main(String[] args) {
        double income, tax, newincome;
        System.out.println("Please input the data.");
        Scanner userInput = new Scanner(System.in);
        income = userInput.nextDouble();
        tax = income * .13;
        newincome = tax + income;
        System.out.println("Income with tax: " + newincome);
        userInput.close();
    }
}
