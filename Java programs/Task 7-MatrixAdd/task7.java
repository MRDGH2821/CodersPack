//Write a Java program to add two matrices of the same size
import java.util.scanner;
public class task7
{
   public int accept(p[][])
   {
      Scanner in = new scanner(System.in);

      System.out.println("Enter Matrix values: ");
      for (int i = 0; i < 5; i++)
      {
         for (int j = 0; j < 5; j++)
         {
            System.out.print("Matrix value at " + i + "," + j);
            p[i][j] = in.nextInt();
         }
      }
      return(p);
   }

   public static void main(String[] args)
   {
      int a[5][5];
      int b[5][5];

      System.out.println("Matrix A:");
      accept(a);
      System.out.println("Matrix B:");
      accept(b);
   }
}
