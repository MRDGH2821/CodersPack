// Write a Java program to add two binary numbers
package src.task_2_binary_adder;

import java.util.InputMismatchException;
import java.util.Scanner;

public final class Task2 {

  private Task2() {
  }

  /**
   * Adds two integer numbers & returns the sum as a binary value.
   *
   * @param input0 first number
   * @param input1 second number
   * @return sum of the two numbers as a binary value
   */
  public static String addBinary(final String input0, final String input1) {
    // Use as radix 2 because it's binary
    final int number0 = Integer.parseInt(input0, 2);
    final int number1 = Integer.parseInt(input1, 2);

    final int sum = number0 + number1;

    return Integer.toBinaryString(sum); // returns the answer as a binary value;
  }

  /**
   * Accepts input & displays the output.
   *
   * @param args
   */
  public static void main(final String[] args) {
    String num1;
    String num2;
    final Scanner inputScan = new Scanner(System.in);
    try {
      System.out.println("Enter 2 binary numbers:");
      num1 = inputScan.nextLine();
      num2 = inputScan.nextLine();
      System.out.println("Output = " + addBinary(num1, num2));
    } catch (InputMismatchException e) {
      System.out.println("Invalid input");
    } finally {
      inputScan.close();
    }
  }
}
