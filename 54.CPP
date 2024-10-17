//WAP to using herachical inheritance
#include<iostream.h>
#include<conio.h>
class A
{
protected:
	int a,b;
	public:
	void get_ab()
	{
	a=10;
	b=5;
	}
	void put_ab(void)
	{
	cout<<"\n value of a:"<<a;
	cout<<"\n value of b:"<<b;
	}
       };
       class multiplication:public A
       {
		int mul;
		public:
		void disp_mul(void)
		{
		get_ab();
		put_ab();
		mul=a*b;
		cout<<"\n mulatiplication="<<mul;
		}
		};
		class division:public A
		{
		float div;
		public:
		void disp_div(void)
		{
		get_ab();
		div=a/b;
		cout<<"\n division="<<div;
		}
		};
		class  subtraction:public A
		{
		int sub;
		public:
		void disp_sub(void)
		{
		get_ab();
		sub=a-b;
		cout<<"\n subtraction="<<sub;
		}
		};
		class addtion:public A
		{
		int add;
		public:
		void disp_add(void)
		{
		get_ab();
		add=a+b;
		cout<<"\n addtion="<<add;
		}
		};
		void main()
		{
		addtion a;
		multiplication m;
		subtraction s;
		division d;
		clrscr();
		m.disp_mul();
		s.disp_sub();
		d.disp_div();
		a.disp_add();
		getch();
		}




