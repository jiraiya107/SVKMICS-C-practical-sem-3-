// write the c++ program is class book//

#include<iostream.h>
#include<conio.h>
class book
{
    int no_of_pages;
    char book_name[80];
    public:
    float price;
    void getdata()
    {
     cout<<"Enter book name:";cin>>book_name;cout<<"Enter book price:";
     cin>>price;
     cout<<"Enter no. of pages:";
     cin>>no_of_pages;
     cout<<endl;
     }
    void display()
    {
     cout<<"\n Enter book name:"<<book_name;cout<<"\n book price"<<price;
     cout<<"\n no. of pages:"<<no_of_pages;
    }
};
int main()
{
     book b1,b2;
     clrscr();
     b1.getdata();
     b2.getdata();if(b1.price>b2.price)
     b1.display();
     return 0;
}







