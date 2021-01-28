import java.util.Scanner;

public class Fare_Calculator {
    public static void main(String[] args) {

        int age;
        double tax, price, totalPrice, totalTax;
        
        totalPrice = 0;
        tax = .13;
        
        System.out.println("Please enter your age: ");
        Scanner userInput = new Scanner(System.in);
        age = userInput.nextInt();
        
        if(age <= 10){
            price = 5.00;
            totalTax = price*tax;
            totalPrice = totalTax + price;
        } else if(age > 10){
            price = 10.00;
            totalTax = price*tax;
            totalPrice = totalTax + price;
        }
        
        System.out.println("Your total price will be: " + totalPrice);
        userInput.close();
    
    }
}
