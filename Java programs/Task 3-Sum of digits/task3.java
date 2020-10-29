//Write a Java program and compute the sum of the digits of an integer
import java.util.Scanner;

public class task3 {
   public static void main(String [] args)
   {
      int r, sum = 0;

      System.out.println("Enter a Number:");   // prints Hello World
      Scanner in = new Scanner(System.in);

      r = in.nextInt();
      while (r > 0)
      {
         sum = sum + r % 10;
         r   = r / 10;
      }
      System.out.println("Sum of digits is = " + sum);
   }
}
