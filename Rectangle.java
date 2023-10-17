/* AREA OF RECTANGLE */
// INPUT LENGTH 
// INPUT WIDTH
// AREA OF RECTANGLE = L*W

import java.util.Scanner;
class Rectangle
{
public static void main(String []args)
{
int L;
int W;
System.out.print("Enter value for side");
Scanner r = new Scanner(System.in);
L=r.nextInt();
W=r.nextInt();
area = L*W;
System.out.println("Aare of rectangle"+area);
}
}
 