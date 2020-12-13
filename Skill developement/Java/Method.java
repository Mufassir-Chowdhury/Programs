import java.util.Scanner;

public class Method {
    public static int add(int x, int y) {
        return x+y;
    }
    public static int subtract(int x, int y) {
        return x-y;
    }
    public static void main(String[] args) {
        int operation, number1, number2, result;
        System.out.println("Plese select which operation you want to perform: ");
        System.out.println("1. Addition\n2. Subtraction");
        Scanner userInput = new Scanner(System.in);
        operation = userInput.nextInt();
        System.out.println("Please input the first number:");
        number1 = userInput.nextInt();
        System.out.println("Please input the second number:");
        number2 = userInput.nextInt();
        if(operation == 1)
            result = add(number1, number2);
        else
            result = subtract(number1, number2);
        System.out.println("The result is: "+result);
    }
}
