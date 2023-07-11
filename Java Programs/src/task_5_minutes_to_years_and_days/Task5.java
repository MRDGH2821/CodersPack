/* Write a Java program to convert minutes into a number of years and days
 *
 * Test data :
 * Input the number of minutes: 3456789
 * Expected output:
 * 3456789 minutes is approximately 6 years and 210 days*/
package src.task_5_minutes_to_years_and_days;

import java.util.Scanner;

public final class Task5 {

  private Task5() {
  }

  /**
   * Converts minutes to years and days.
   *
   * @param args
   */
  public static void main(final String[] args) {
    int min = 0;
    int days = 0;
    int yr = 0;
    int mins = 0;

    final int minutesInDay = 1440;
    final int daysInYear = 365;

    System.out.println("Enter minutes:");

    Scanner in = new Scanner(System.in);
    try {
      min = in.nextInt();
      mins = min;
      while (min >= minutesInDay) {
        days = days + min / minutesInDay;
        while (days >= daysInYear) {
          yr = yr + days / daysInYear;
          days = days % daysInYear;
        }
        min = min % minutesInDay;
      }
      String resultInit = mins + "minutes is approximately ";
      String resultYr = yr + " years and ";
      String resultDays = days + " days";
      String result = resultInit + resultYr + resultDays;
      System.out.println(result);
    } catch (Exception e) {
      System.out.println("Invalid input");
    } finally {
      in.close();
    }
  }
}
