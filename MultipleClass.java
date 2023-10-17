/*qustion2*\

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
System.out.println("Sum="+(x+y+n));
}
}
class C extends A
{
int m;
void showC()
{
System.out.println("Sum="+(x+y+m));
}

}

class D extends A
{
int q;
void showD()
{
System.out.println("Sum="+(x+y+q));
}

}

public class MultipleClass {

public static void main(String[] args) {
C bo = new C();
bo.x=1;
bo.y=2;
//bo.n=5;
bo.m=6;
// bo.q=7;
bo.showA();
//bo.showB();
bo.showC();
// bo.showD();




}

}