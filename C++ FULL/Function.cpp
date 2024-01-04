#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
/*//...1...Function Basic
void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);

int main()
{
    addition(10,22);
    subtraction(10,32);
    multiplication(10,3);
    division(30,3);

    getch();
}

void addition(int a,int b)
{
    int sum=a+b;
    cout<<"sum: "<<sum<<endl;
}

void subtraction(int a,int b)
{
    int result=a-b;
    cout<<"sub: "<<result<<endl;
}

void multiplication(int a,int b)
{
    int result=a*b;
    cout<<"Multi: "<<result<<endl;
}

void division(int a,int b)
{
    double result=(float)a/b;
    cout<<"div: "<<result<<endl;
}

//...2...Returning a value from a Function
int addition(int,int);
int main()
{
    int result= addition(10,20);
    cout<<result;
    getch();
}
int addition(int a,int b)
{
    int sum = a+b;
    return sum;
}

//...3...Returning a value from a Function 2
double addition(double,double);
int main()
{
    cout<<"Sum: "<<addition(10.3,20.3);
    getch();
}
double addition(double a,double b)
{
    double sum = a+b;
    return sum;
}

//...4...default values for parameters

void display(int a=10,int b=15)
{
    cout<< a <<" "<<b<<endl;
}
int main()
{
    display();
    display(25);
    display(25,30);
    getch();
}

//...5...advatage of parameters

void display(int n)
{
    int result =n*n;
    cout<<"Square of "<<n<<" = "<<result<<endl;
}
int main()
{
    display(4);
    display(5);
    display(6);
    getch();
}
//...6...Function overloading
void sum(int x,int y)
{
    int add = x+y;
    cout<<add<<endl;
}

void sum(int x,int y,int z)
{
    int add = x+y+z;
    cout<<add<<endl;
}

int main()
{
    sum(10,20);
    sum(10,20,5);
}
//...7...Passing Array To Function
void displayarray(int num[],int size)
{
    for(int i=0;i<=4;i++){
        cout<<num[i]<<" ";
    }
}
int main()
{
    int number[5] = {11,22,33,44,55};
    displayarray(number,5);
}
//...8...Recursion(1.recursive call  2.base case)
int fact(int n)
{
    if(n==1){
        return 1;
    }
    else
        return n*fact(n-1);
}
int main()
{
    int factorial=fact(4);
    cout<<factorial;
    getch();
}
//...9...Passing Arguments

//void display(int num)
void display(int *num)
{
    //num=20;
    *num=20;
}
int main()
{
    int x=10;
    cout<<"Before calling the function x = "<<x<<endl;

    //display(x);  //pass by value
    display(&x);   //pass by reference
    cout<<"After calling the function x = "<<x<<endl;

    getch();
}
//...10...Global value
int x=11;
void display()
{
    cout<<"inside the display fun. x = " <<x<<endl;
}
int main()
{
    cout<<"inside the main fun. x = "<<x<<endl;
    display();
    getch();
}

//...11...Fuction templates
template <class mytemplate>
mytemplate add (mytemplate a,mytemplate b)
{
    return a+b;
}
int main()
{
    cout<< add(12,20)<<endl;
    cout<< add(12.5,20.5)<<endl;
    getch();
}

//...12...Fuction templates with multiple perameter
template <class mytemplate1,class mytemplate2>
mytemplate1 add (mytemplate1 a,mytemplate2 b)
{
    return a+b;
}
int main()
{
    cout<< add(12.5,20)<<endl;
    getch();
}

//...13...Scope resolation
int x=11;   //global v.
int main()
{
    int x=10;
    //int x=50;    //local v.
    :: x =25;
    cout<< :: x<<endl;
    getch();
}

*///...12...Fuction templates with multiple perameter
template <class mytemplate1,class mytemplate2>
mytemplate1 add (mytemplate1 a,mytemplate2 b)
{
    return a+b;
}
int main()
{
    cout<< add(12.5,20)<<endl;
    getch();
}






