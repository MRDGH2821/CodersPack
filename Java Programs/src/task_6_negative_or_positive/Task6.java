/* Write a Java program that reads an integer
 * and check whether it is negative, zero or positive*/
package src.task_6_negative_or_positive;

import java.util.Scanner;

public final class Task6 {

  private Task6() {
  }

  /**
   * Accepts input & displays whether it is negative, zero or positive.
   *
   * @param args
   */
  public static void main(final String[] args) {
    int number;
    System.out.println("Enter a number:");

    Scanner in = new Scanner(System.in);
    try {
      number = in.nextInt();
      if (number < 0) {
        System.out.println("It is negative");
      } else if (number > 0) {
        System.out.println("It is positive");
      } else {
        System.out.println("It is zero");
      }
    } catch (Exception e) {
      System.out.println("Invalid input");
    } finally {
      in.close();
    }
  }
}
