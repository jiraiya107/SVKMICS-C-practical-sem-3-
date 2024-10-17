#include<iostream.h>
#include<conio.h>
int main()
{
	int days;
	float fine;
	clrscr();
	cout<<"enter the number of late days:";
	cin>>days;
	if(days<=30)
	{
		if(days<=30&&days>10)
		fine=1+((days-10)*5);
		else if (days<=10&&days>5)
		fine=2.5+((days-5)*1);
		else if (days<6&&days>0)
		fine=2.5+((days<6&&days>0)
		fine=days*0.5;
		cout<<"enter the fine:"<<fine;
		}
		else
		cout<<"your membership is canceled \n\n";
		return 0;

}



















