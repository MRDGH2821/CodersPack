import java.util.Scanner;

//import java.util.Scanner;
public class task1 {

/* This is my first java program.
 * This will print 'Hello World' as the output
 */

public static void main(String [] args) {
        int r;
        System.out.println("Enter radius of circle:"); // prints Hello World
        Scanner in = new Scanner(System.in);
        r=in.nextInt();
        System.out.println("Area of circle is:" + 3.14*r*r);
        System.out.println("Perimeter of circle is:" + 2*3.14*r);
}
}
