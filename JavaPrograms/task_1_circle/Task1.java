
//Write a Java program to print the area and perimeter of a circle
import java.util.Scanner;

public final class Task1 {

  private Task1() {
  }

  /**
   * @param args
   */
  public static void main(final String[] args) {
    int r;

    System.out.println("Enter radius of circle:"); // prints Hello World
    Scanner inputScan = new Scanner(System.in);
    final double pi = 3.14;
    try {
      r = inputScan.nextInt();
      System.out.println("Area of circle is:" + pi * r * r);
      System.out.println("Perimeter of circle is:" + 2 * pi * r);
    } catch (Exception e) {
      System.out.println("Please enter a valid number");
    } finally {
      inputScan.close();
    }
  }
}
