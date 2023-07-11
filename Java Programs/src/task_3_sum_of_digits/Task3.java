// Write a Java program and compute the sum of the digits of an integer
package src.task_3_sum_of_digits;

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
    int r;
    int sum = 0;
    final int tensPlace = 10;
    System.out.println("Enter a Number:"); // prints Hello World
    Scanner in = new Scanner(System.in);
    try {
      r = in.nextInt();
      while (r > 0) {
        sum = sum + r % tensPlace;
        r = r / tensPlace;
      }
      System.out.println("Sum of digits is = " + sum);
    } catch (Exception e) {
      System.out.println("Invalid input");
    } finally {
      in.close();
    }
  }
}
