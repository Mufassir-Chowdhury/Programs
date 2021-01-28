import java.math.*; 
  
public class GFG { 
  
    public static void main(String[] args) 
    { 
        Scanner myObj = new Scanner(System.in); 
        int t = myObj.nextInt();
        for(int i=1; i<=t; i++){
            int a = myObj.nextInt();
            int b = myObj.nextInt();
            BigInteger dividend = new BigInteger("a"); 
            BigInteger divisor = new BigInteger("b"); 
            BigInteger[] answers = dividend.divideAndRemainder(divisor);  
            System.out.println("Remainder : " + answers[1]);
            if(answers == 0){
                System.out.println("Case " + i + ": divisible");
            } else{
                System.out.println("Case " + i + ": not divisible");
            }
        } 
    } 
} 