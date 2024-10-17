// WAP to implement multi-level inheritence

#include<iostream.h>
#include<conio.h>
class student
{
	protected:
		int rollno;
	public:
		void get_rollno(int x)
		{
			rollno=x;
		}
		void put_rollno(void)
		{
			cout<<"\n Roll No: "<<rollno;
		}
};
class test : public student
{
	protected:
		int sub1,sub2;
	public:
		void get_marks(int s1,int s2)
		{
			sub1=s1;
			sub2=s2;
		}
		void disp_marks(void)
		{
			cout<<"\n marks of subject 1: "<<sub1;
			cout<<"\n marks of subject 2: "<<sub2;
		}
};
class result : public test
{
	int total;
	public:
		void display(void)
		{
			total = sub1+sub2;
			put_rollno();
			disp_marks();
			cout<<"\n Total Marks: "<<total;
		}
};
int main()
{
	result r;
	clrscr();
	r.get_rollno(75);
	r.get_marks(55,52);
	r.display();
	return 0;
}