// wap to create urany operator overloding
#include<iostream.h>
#include<conio.h>
class space
{
	int x,y,z;
	public:
	void getdeta(int a,int b,int c);
	void display();
	void operator -();
};
void space :: getdeta(int a,int b,int c)
{
	x=a;
	y=b;
	z=c;
}
void space :: display()
{
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<z<<endl;
}
void space :: operator-()
{
	x=-x;
	y=-y;
	z=-z;
}
void main()
{
	space s;
	clrscr();
	s.getdeta(5,10,15);
	s.display();
	-s;
	s.display();
	getch();
}


















