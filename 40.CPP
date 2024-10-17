// WAP: zero argument  constructor
#include<iostream.h>
#include<conio.h>
class abc
{
	int m,n;

	public:
	abc();
	void display()
	{
		cout<<"value of m is:"<<m<<endl;
		cout<<"value of n is:"<<n<<endl;
	}
};
abc :: abc()
{
	m=10;
	n=20;
}
void main()
{
	abc a;
	clrscr();
	a.display();
	getch();
}


