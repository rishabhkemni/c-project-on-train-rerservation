#include <iomanip>
#include <iostream>
#include <string.h>
#include <Windows.h>

using namespace std;
class pass
{
public:
char name[20],add[20],sou[20],dest[20],jd[10];
int age,cls,rs,rb;
void getdata();
void display();
};
void pass::getdata()
{

cout<<"\n\t Enter the passenger name:";
cin>>name;

cout<<"\n\t Enter the address:";
cin>>add;
cout<<"\n\t Enter age of the passenger:";
cin>>age;
cout<<"\n\t Enter the source:";
cin>>sou;
cout<<"\n\t Enter the destination:";
cin>>dest;
cout<<"\n\t Enter the class performed:";
cin>>cls;
cout<<"\n\t Enter the seat required:";
cin>>rs;
cout<<"\n\t Enter the berth required:";
cin>>rb;
cout<<"\n\t Enter the date of journey:";
cin>>jd;
}
void pass::display()
{
cout<<"\n\t passenger details:";
cout<<"\n\t name:"<<name<<"\n\t address:"<<add<<"\n\t source:"<<sou<<"\n\t destination:"<<dest<<"\n\t class:"<<cls<<"\n\t date of journey:"<<jd<<endl;
}
class train:public pass
{
public:
char tname[20],rd[10];
int s,b,amt,da,cla,cd;
void get();
void cl();
void amtc();
void put();
};
void train::get()
{
cout<<"\n\t Enter the train name:";
cin>>tname;
cout<<"\n\t Enter the no of seats:";
cin>>s;
cout<<"\n\t Enter the no of breths:";
cin>>b;
cout<<"\n\t Enter the no of reservation date:";
cin>>rd;
}
                                          /****************************************
                                           * Title:Train-Ticket Reservation System*
                                           * Author: Rishabh Kemni                *
                                           * Dated: April 16,2018                 *
                                           ****************************************/
void train::cl()
{
if(s>=rs && b>=rb)
cout<<"\n\t seats and berths confirmed:";
else
cout<<"\n\t seats and berth are waiting list:";
}
void train::amtc()
{
if(da==1)
{
amt=(rs*150)+(rb*300);
}
else if(cla==2)
{
amt=(rs*100)+(rb*200);
}
else
{
amt=rs*75;
}
if(age<60)
cout<<"\n\tamount"<<amt<<endl;
else
{
cout<<"\n\t u r a senior citizen:";
amt=amt/2;
cout<<"\n\t Amount is:"<<amt<<endl;
}
}
void train::put()
{
cout<<"\n\t seats details:";
cout<<"\n\t No of seats:"<<s<<"\n\t No of breths:"<<b<<"\n\t Date of reservation:"<<rd;
}
class canc:public train
{
public:
char c;
int id,per,amt,amt1;
void getd();
void putd();
};
void canc::getd()
{
cout<<"\n\t Do you want to cancel the resvervation:";
cin>>c;
if(c=='Y'||c=='y')
{
cout<<"\n\t Enter the cancellation:";
cin>>cd;
cout<<"\n\t Cancellation is made after ";
if(cd>=24)
{
per=(amt*40)/100;
amt1=amt-per;
cout<<"\n\t renaming amount after returning back the cancellation";
}
else if(cd>24 && cd<48)
{
per=(amt*20)/100;
amt1=amt-per;
cout<<"\n\t remaining amount after turning back the back the cancellation:";
}
else
{
cout<<"\n\tcancellation can not be done";
}
}
else
{
cout<<"\n\t Happy Journey:";
cout<<"\n\t MADE   BY    RISHI   :";
}
}
int main()
{
cout<<"/***************************************** Title:Train-Ticket Reservation System*"<<endl;
                                        cout<<"* Author: Rishabh Kemni                 *"<<endl;
                                        cout<<"* Dated: April 16,2018                  *"<<endl;
                                        cout<<" ****************************************/ "<<endl;
system("color 6B");
canc t;
t.getdata();
cout<<"\n\t details of pass:";
t.display();
cout<<"\n\t train details";
t.get();
t.put();
t.cl();
t.amtc();
t.getd();
//getch();
}
