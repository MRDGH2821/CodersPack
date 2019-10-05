//Write a Java program to add two binary numbers

import java.util.Scanner;

public class task2 {
public static String addBinary(String input0,String input1){
	// Use as radix 2 because it's binary
	int number0 = Integer.parseInt(input0, 2);
	int number1 = Integer.parseInt(input1, 2);

	int sum = number0 + number1;
	return Integer.toBinaryString(sum); //returns the answer as a binary value;
}
public static void main(String [] args) {
	String n1;
	String n2;
	Scanner in = new Scanner(System.in);
	n1=in.nextString();
	n2=in.nextString();
	System.out.println("Output = " + addBinary(n1,n2) );
}
}
