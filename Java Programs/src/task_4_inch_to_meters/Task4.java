// Write a Java program that reads a number in inches, converts it to meters
// Note: one inch is 0.0254 meter.
package src.task_4_inch_to_meters;

import java.util.Scanner;

public final class Task4 {

  private Task4() {
  }

  /**
   * Converts inches to meters.
   *
   * @param args
   */
  public static void main(final String[] args) {
    double meter;
    double inch;
    final double inchToMeter = 0.0254;
    System.out.println("Enter inches:");

    Scanner in = new Scanner(System.in);
    try {
      inch = in.nextFloat();
      meter = inch * inchToMeter;
      System.out.println("Meter = " + meter);
    } catch (Exception e) {
      System.out.println("Invalid input");
    } finally {
      in.close();
    }
  }
}
