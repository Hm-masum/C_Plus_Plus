#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

/*//...1...Class basic

class student
{
    public:
       int id;
       double gpa;
};
int main()
{
    student alim;
    alim.id=111;
    alim.gpa=4.61;

    cout<<alim.id<<" "<<alim.gpa<<endl;

    student masum;
    masum.id=432;
    masum.gpa=5.01;

    cout<<masum.id<<" "<<masum.gpa;
}
//...2...Adding Function
class student
{
    public:
       int id;
       double gpa;
       void display()
       {
           cout<<id<<" "<<gpa<<endl;
       }
};
int main()
{
    student alim;
    alim.id=111;
    alim.gpa=4.61;
    alim.display();

    student masum;
    masum.id=432;
    masum.gpa=5.01;
    masum.display();
}
//...3...Adding parametrized Function
class student
{
    public:
       int id;
       double gpa;
       void display()
       {
           cout<<id<<" "<<gpa<<endl;
       }
       void setvalue(int x,double y)
       {
           id = x;
           gpa = y;
       }
};
int main()
{
    student alim,masum;
    alim.setvalue(123,4.61);
    alim.display();

    masum.setvalue(188,4.69);
    masum.display();

    getch();
}
//...4...Constructor
class student
{
    public:
       int id;
       double gpa;
       void display()
       {
           cout<<id<<" "<<gpa<<endl;
       }
       student(int x,double y)
       {
           id = x;
           gpa = y;
       }
};
int main()
{
    student alim(123,4.61);
    alim.display();

    student masum(188,4.69);
    masum.display();

    getch();
}
//...5...Default Constructor
class student
{
    public:
       int id;
       double gpa;
       void display()
       {
           cout<<id<<" "<<gpa<<endl;
       }
       student(int x,double y)
       {
           id = x;
           gpa = y;
       }
       student()
       {
           cout<<"default constractor"<<endl;
       }
};
int main()
{
    student obi;
    student alim(123,4.61);
    alim.display();

    student masum(188,4.69);
    masum.display();

    getch();
}
//...6...Constructor initializer
class student
{
    public:
       const int admissionfee;
       const int examfee;
       int id;
       student(int x,int y,int z)
       :admissionfee(x),examfee(y)
       {
           cout<<admissionfee<<endl;
           cout<<examfee<<endl;
           id=z;
           cout<<"id="<<z;
       }
};

int main()
{
    student s1(1555,555,123);
    getch();
}

*///...7...Friend Class
 class A
 {
 private:
    int id =101;
    string name ="Anisul";
 public:
    friend class B;
 };

 class B
 {
 public:
    void display (A ob)
    {
        cout<<ob.id<<endl;
        cout<<ob.name;
    }
 };
int main()
{
    A ob1;
    B ob2;
    ob2.display(ob1);
    getch();
}





