// WAP to find average marks using class

#include<iostream.h>
#include<conio.h>
class avg
{
	private:
	int total,s1,s2,s3,avg;
	public:
	void input()
	{
		cout<<"Enter Marks For Subject 1: ";
		cin>>s1;
		cout<<"Enter Marks For Subject 2: ";
		cin>>s2;
		cout<<"Enter Marks For Subject 3: ";
		cin>>s3;
	}
	void average()
	{
		total=s1+s2+s3;
		avg=total/3;
	}
	void display()
	{
		cout<<"Total: "<<total<<endl;
		cout<<"Average: "<<avg<<endl;
	}
};
int main()
{
	clrscr();
	avg a;
	a.input();
	a.average();
	a.display();
	return 0;
}