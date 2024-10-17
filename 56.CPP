//WAP to impliment multiple inheritance
#include<iostream.h>
#include<conio.h>
class m
{
	protected:
	int m;
	public:
	void get_m(int x)
	{
		m=x;
		}
	   };
	   class n
	   {
	   protected:
	   int n;
	   public:
	   void get_n(int y)
	   {
	     n=y;
	     }
	 };
	 class p:public m,public n
	 {
	 public:
	 void display(void)
	 {
	   cout<<"\n value of m:"<<m;
	   cout<<"\n value of n:"<<n;
	   cout<<"\n m*n"<<m*n;
	   }
	};
	void main()
	{
	p temp;
	clrscr();
	temp.get_m(20);
	temp.get_n(5);
	temp.display();
	getch();
	}
