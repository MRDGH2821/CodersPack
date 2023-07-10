/*Write a Java program to convert minutes into a number of years and days
 *
 * Test data :
 * Input the number of minutes: 3456789
 * Expected output:
 * 3456789 minutes is approximately 6 years and 210 days*/

import java.util.Scanner;

public class Task5 {

  public static void main(String[] args) {
    int min = 0;
    int days = 0;
    int yr = 0;
    int mind = 0;
    Scanner in = new Scanner(System.in);

    System.out.println("Enter minutes:");
    min = in.nextInt();
    mind = min;
    while (min >= 1440) {
      days = days + min / 1440;
      while (days >= 365) {
        yr = yr + days / 365;
        days = days % 365;
      }
      min = min % 1440;
    }
    System.out.println(
      mind + "minutes is approximately " + yr + " years and " + days + " days"
    );
    in.close();
  }
}
