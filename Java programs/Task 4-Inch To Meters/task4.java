// Write a Java program that reads a number in inches, converts it to meters
//Note: one inch is 0.0254 meter.

import java.util.Scanner;

public class task4 {

  public static void main(String[] args) {
    double mt, inc;
    Scanner in = new Scanner(System.in);

    System.out.println("Enter inches:");
    inc = in.nextFloat();
    mt = inc * 0.0254;
    System.out.println("Meter = " + mt);
  }
}
