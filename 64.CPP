//WAP binary operator overloading
#include<iostream.h>
#include<conio.h>
class complex
{
	public:
	int x,y;
	complex(){}
	complex(int a,int b)
	{
	x=a;
	y=b;
	}
	void display()
	{
	 cout<<"x="<<x<<endl;
	 cout<<"y="<<y<<endl;
	 }
	 complex operator+(complex c)
	 {
	   complex temp;
	   temp.x=x+c.x;
	   temp.y=y+c.y;
	   return temp;
	 }
};
	   void main()
	   {
	   complex c1,c2,c3;
	   clrscr();
	   c1=complex(5,4);
	   c2=complex(6,4);
	   c3=c1+c2;
	   c1.display();
	   c2.display();
	   c3.display();
	   getch();
	   }


