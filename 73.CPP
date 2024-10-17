//WAP company worker cheq the work to hour
#include<iostream.h>
#include<conio.h>
void main()
{
	float time;
	clrscr();
	cout<<"enter the time of the workers";
	cin>>time;
	if(time>=2&&time<3)
	{
		cout<<"The worker is highly efficient";
	}
	if(time>=3&&time<4)
	{
		cout<<"The worker need to be improved";
	}
	if(time>=4&&time<5)
	{
		cout<<"The worker need to attend training to improve his speed ";
	}
	if(time>=5)
	{
		cout<<" leave the company";
	}
	getch();

}