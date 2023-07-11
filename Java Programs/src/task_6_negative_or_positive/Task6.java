//Write a Java program that reads an integer and check whether it is negative, zero or positive

import java.util.Scanner;

public final class Task6 {

  private Task6() {}

  public static void main(String[] args) {
    int a;
    Scanner in = new Scanner(System.in);

    System.out.println("Enter a number:");
    a = in.nextInt();
    if (a < 0) {
      System.out.println("It is negative");
    } else if (a > 0) {
      System.out.println("It is positive");
    } else {
      System.out.println("It is zero");
    }
    in.close();
  }
}
