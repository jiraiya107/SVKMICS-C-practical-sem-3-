//avg of subject
#include<iostream.h>
#include<conio.h>
int main()
{
	int m1,m2,m3,m4,m5,m6,total,avg;
	clrscr();
	cout<<" 1st subject:";
	cin>>m1;
	cout<<" 2nd subject:";
	cin>>m2;
	cout<<" 3rd subject:";
	cin>>m3;
	cout<<" 4th subject:";
	cin>>m4;
	cout<<" 5th subject:";
	cin>>m5;
	cout<<" 6th subject:";
	cin>>m6;
	total=m1+m2+m3+m4+m5+m6;
	cout<<" total= "<<total;
	avg=total/6;
	cout<<"avg=  "<<avg;
	if(avg<=35)
	{
		cout<<"fail"<<endl;
	}
	else
	{
		if(avg>35 && avg<=50)
		{
			cout<<"third"<<endl;
		}
		else
		{
			if(avg>=50 && avg<=60)
			{
			     cout<<"second"<<endl;
			}
		else
		{
			if(avg>=60 && avg<=75)
			{
				cout<<"first"<<endl;
			}
			else
			{
				cout<<"dis"<<endl;
			}
		}
	}
     }
      return 0;
}