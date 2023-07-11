// Write a Java program to print the area and perimeter of a circle
package src.task_1_circle;

import java.util.InputMismatchException;
import java.util.Scanner;

public final class Task1 {

  private Task1() {
  }

  /**
   * @param args
   */
  public static void main(final String[] args) {
    int radius;

    System.out.println("Enter radius of circle:"); // prints Hello World
    final Scanner inputScan = new Scanner(System.in);
    final double mathPi = 3.14;
    try {
      radius = inputScan.nextInt();
      System.out.println("Area of circle is:" + mathPi * radius * radius);
      System.out.println("Perimeter of circle is:" + 2 * mathPi * radius);
    } catch (InputMismatchException e) {
      System.out.println("Please enter a valid number");
    } finally {
      inputScan.close();
    }
  }
}
