// Write a Java program to add two matrices of the same size.
package src.task_7_matrix_add;

import java.util.Scanner;

public final class Task7 {
  /**
   * Size of Matrix.
   */
  private static final int SIZE = 5;

  private Task7() {
  }

  /**
   * Accepts 5x5 Matrix Input.
   *
   * @param p 5x5 Matrix variable
   * @return 5x5 Matrix filled with input values
   */
  public static int[][] accept(final int[][] p) {
    System.out.println("Enter Matrix values: ");
    Scanner in = new Scanner(System.in);
    try {
      for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
          System.out.print("Matrix value at " + i + "," + j + ": ");
          p[i][j] = in.nextInt();
        }
      }
    } catch (Exception e) {
      System.out.println("Invalid input");
    } finally {

      in.close();
    }
    return p;
  }

  /**
   * Displays 5x5 Matrix.
   *
   * @param args
   */
  public static void main(final String[] args) {
    int[][] a = new int[SIZE][SIZE];
    int[][] b = new int[SIZE][SIZE];

    System.out.println("Matrix A:");
    accept(a);
    System.out.println("Matrix B:");
    accept(b);
  }
}