// Write a Java program to add two matrices of the same size.
package src.task_7_matrix_add;

import java.util.InputMismatchException;
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
   * @return 5x5 Matrix filled with input values
   */
  public static int[][] acceptMatrix() {
    int[][] matrix = new int[SIZE][SIZE];
    System.out.println("Enter Matrix values: ");
    Scanner inputScan = new Scanner(System.in);
    try {
      for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
          System.out.print("Matrix value at " + i + "," + j + ": ");
          matrix[i][j] = inputScan.nextInt();
        }
      }
    } catch (InputMismatchException e) {
      System.out.println("Invalid input");
    } finally {
      inputScan.close();
    }
    return matrix;
  }

  /**
   * Adds two 5x5 Matrices and displays them.
   *
   * @param matrixA
   * @param matrixB
   */
  public static void addMatrix(final int[][] matrixA, final int[][] matrixB) {
    int[][] matrixC = new int[SIZE][SIZE];
    System.out.println("Calculating Sum of Matrix A & B:");
    for (int i = 0; i < SIZE; i++) {
      System.out.print("[");
      for (int j = 0; j < SIZE; j++) {
        matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        System.out.print(matrixC[i][j] + " ");
      }
      System.out.println("]");
    }

  }

  /**
   * Displays 5x5 Matrix.
   *
   * @param args
   */
  public static void main(final String[] args) {

    System.out.println("Matrix A:");
    int[][] matrixA = acceptMatrix();

    System.out.println("Matrix B:");
    int[][] matrixB = acceptMatrix();

    System.out.println("Sum of Matrices:");
    addMatrix(matrixA, matrixB);
  }
}
