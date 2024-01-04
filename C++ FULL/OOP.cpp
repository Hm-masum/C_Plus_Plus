#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

/*//...1...Encapsulation
class student
{
private:
    string name;
public :
    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }
};
int main()
{
    student s1;
    s1.setName("masum");
    cout<<s1.getName();
    getch();
}
//...2...This keyword

class student
{
    public:
       string name;
       student(string name)
       {
           this -> name = name;
       }
       void display()
       {
           cout<<name<<endl;
       }
};
int main()
{
    student s1("masum");
    s1.display();
    getch();
}
//...3...inheritance

class person
{
    public:
       string name;
       int age;

       void display()
       {
           cout<<"Name : "<<name<<endl;
           cout<<"Age : "<<age<<endl;
       }
};
class student : public person
{
    public:
       int id;

       void display2()
       {
           cout<<"id : "<<id<<endl;
           cout<<"Name : "<<name<<endl;
           cout<<"Age : "<<age<<endl;
       }
};
int main()
{
    student s1;
    s1.id=111;
    s1.name="masum";
    s1.age=22;
    s1.display2();
    getch();
}
//...4...Function overriding
class person
{
    public:
       void display()
       {
           cout<<"I am a person"<<endl;

       }
};
class student : public person
{
    public:
       void display()
       {
           cout<<"I am a student"<<endl;
       }
};
class teacher : public person
{
    public:
       void display()
       {
           cout<<"I am a teacher"<<endl;
       }
};
int main()
{
    person p;
    p.display();
    student s;
    s.display();
    teacher t;
    t.display();
    getch();
}
//...5...Function overriding
class person
{
    public:
       void display()
       {
           cout<<"I am a person"<<endl;

       }
};
class student : public person
{
    public:
       void display()
       {
           cout<<"I am a student"<<endl;
       }
};
class teacher : public person
{
    public:
       void display()
       {
           cout<<"I am a teacher"<<endl;
       }
};
int main()
{
    person p;
    p.display();
    student s;
    s.display();
    teacher t;
    t.display();
    getch();
}
//...6...polymorphysm
class person
{
    public:
       virtual void display()
       {
           cout<<"I am a person"<<endl;

       }
};
class student : public person
{
    public:
       void display()
       {
           cout<<"I am a student"<<endl;
       }
};
class teacher : public person
{
    public:
       void display()
       {
           cout<<"I am a teacher"<<endl;
       }
};
int main()
{
    teacher t;
    student s;
    person *p;

    p = &s;
    //t.display();
    //s.display();
    p->display();

    p = &t;
    p -> display();
    getch();
}

//...7...polymorphysm
class shape
{
public:
    double dim1,dim2;
    shape(double dim1,double dim2){
        this->dim1=dim1;
        this->dim2=dim2;
    }
    virtual double area()
    {
        return 0;
    }
};
class triangle :public shape
{
public:
    triangle(double dim1,double dim2)
    :shape(dim1,dim2)
    {

    }
    double area()
    {
        return 0.5*dim1*dim2;
    }
};
class rectangle :public shape
{
public:
    rectangle(double dim1,double dim2)
    :shape(dim1,dim2)
    {

    }
    double area()
    {
        return dim1*dim2;
    }
};
int main()
{
    shape *p;
    triangle t(10,20);
    rectangle r(10,20);

    p=&t;
    cout<<"Triangle area= "<<p->area()<<endl;
    p=&r;
    cout<<"Recangle area= "<<p->area();

    getch();
}

*///...8...Abstraction
class mobileuser
{
public:
    void call()
    {
        cout<<"Hello !"<<endl;
    }
    virtual void sendMessage()=0;
};
class rahim:public mobileuser
{
public:
    void sendMessage()
    {
        cout<<"Hi,This is Rahim"<<endl;
    }
};
class karim:public mobileuser
{
public:
    void sendMessage()
    {
        cout<<"Hi,This is karim"<<endl;
    }
};
int main()
{
    mobileuser *m;
    rahim r;
    karim k;

    m=&r;
    m->call();
    m->sendMessage();

    m=&k;
    m->sendMessage();
}








