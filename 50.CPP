// WAP to implement the multiple inheritence

#include<iostream.h>
#include<conio.h>
class M
{
	protected:
		int m;
	public:
		void get_m(int x)
		{
			m=x;
		}
};
class N
{
	protected:
		int n;
	public:
		void get_n(int y)
		{
			n=y;
		}
};
class P : public M,public N
{
	public:
		void display()
		{
			cout<<"\n value of m= "<<m;
			cout<<"\n value of n= "<<n;
			cout<<"\n m*n= "<<m*n;
		}
};
int main()
{
	P tmp;
	clrscr();
	tmp.get_m(20);
	tmp.get_n(5);
	tmp.display();
	return 0;
}