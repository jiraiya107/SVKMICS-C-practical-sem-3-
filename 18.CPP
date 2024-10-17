//class example
#include<iostream.h>
#include<conio.h>
class std
    {
     int ro;
     char name[10];
     public:
     void getdata()
     {
	 cout<<"roll number:";
	 cin>>ro;
	 cout<<"name:";
	 cin>>name;
	 }
     void display()
     {
	cout<<"roll:"<<ro;
	cout<<"\n name:"<<name;
     }
     };
int main()
  {
   std s;
   s.getdata();
   s.display();
   return 0;
   }