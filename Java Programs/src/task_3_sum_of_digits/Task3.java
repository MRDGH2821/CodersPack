// Write a Java program and compute the sum of the digits of an integer
package src.task_3_sum_of_digits;

import java.util.InputMismatchException;
import java.util.Scanner;

public final class Task3 {

  private Task3() {
  }

  /**
   * Accepts input & displays the sun of the digits.
   *
   * @param args
   */
  public static void main(final String[] args) {
    int remainder;
    int sum = 0;
    final int tensPlace = 10;
    System.out.println("Enter a Number:"); // prints Hello World
    final Scanner inputScan = new Scanner(System.in);
    try {
      remainder = inputScan.nextInt();
      while (remainder > 0) {
        sum = sum + remainder % tensPlace;
        remainder = remainder / tensPlace;
      }
      System.out.println("Sum of digits is = " + sum);
    } catch (InputMismatchException e) {
      System.out.println("Invalid input");
    } finally {
      inputScan.close();
    }
  }
}
