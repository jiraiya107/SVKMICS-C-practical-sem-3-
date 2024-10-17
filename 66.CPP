
//WAP overlodt operator add two time objectd
#include<iostream.h>
#include<conio.h>
class time
{
	private:
	int hour,minute,second;
	public:
	time() : hour(0), minute(0), second(0) {}
	time(int h, int m, int s) : hour(h), minute(m), second(s) {}
	void show() const
	{
	 cout<<hour << ":" << minute << ":" <<second<<endl;
	}
	time operator+(const time& t) const
	{
	  time temp;
	  temp.hour=hour+t.hour;
	  temp.minute=minute+t.minute;
	  temp.second=second+t.second;
	  if(temp.second>=60)
	  {
	  temp.second-=60;
	  temp.minute++;
	  }
	  if(temp.minute>=60)
	  {
	  temp.minute-=60;
	  temp.hour++;
	  }
	  return temp;
	  }
	  };

	  void main()
	  {
	  clrscr();
	  time t1(4,10,2), t2(10,50,58), t3;
	  t3=t1+t2;
	  t3.show();
	  getch();
	  }



