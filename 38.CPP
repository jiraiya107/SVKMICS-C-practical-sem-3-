// WAP: Parameter Constructors Example

#include<iostream.h>
#include<conio.h>
class integer
{
	int m,n;

	public:
	integer(int m,int n);
	void display()
	{
		cout<<"M="<<m<<endl;
		cout<<"N="<<n<<endl;
	}
};
integer::integer(int x,int y)
{
	m=x;
	n=y;
}
int main()
{
	clrscr();
	integer int1(0,100);  // Implicity Called
	integer int2=integer(25,75);  // Explicity Code
	cout<<"Object=2"<<endl;
	int1.display();
	cout<<"Object=2"<<endl;
	int2.display();
	return 0;
}