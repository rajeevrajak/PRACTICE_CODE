//Q1
class A
{
int x,y;
void showA()
{
System.out.println("Sum="+(x+y));
}
}
class B extends A
{
int n;
void showB()
{
System.out.println();
}
}
class C extends B
{
int m;
public int n;
void showC()
{
System.out.println("Sum="+(x+y+m));
}
void showB() {
System.out.println("Sum="+(x+y+m+n));

}

}

public class CreateClass {

public static void main(String[] args) {
C bo = new C();
bo.x=1;
bo.y=2;
bo.n=5;
bo.m=6;
bo.showA();
bo.showB();
bo.showC();




}

}