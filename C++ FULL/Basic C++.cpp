#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
/*  //...1...
{
    //cout<< "habibullah mohammad masum";
    cout<< "Habibullah" <<" mohammad" <<" masum";
    getch();
}
//...2...
{
    int num1=11,num2=22;
    char ch;
    ch = 'm';
    //cout<< num1 <<endl;
    //cout<< num2;
    //cout<< num1 <<endl<< num2<<endl;
    cout<<"number1= " <<num1 <<endl<<"number2= " <<num2<<endl;
    cout<<ch;

    getch ();
}
//...3...
{
     char name[30] = "Habibullah Mohammad Masum";
     cout<<"My name is = "<<name;

     getch();
}
//...4...
{
    double num;
    char ch;
    char name[25];
    cout<<"Enter an integer number : ";
    cin>>num;

    cout<<"Enter a charecter : ";
    cin>>ch;

    cout<<"Enter a name : ";
    cin>>name;

    cout<<"Entered number is = "<<num<<endl;
    cout<<"Entered charecter is = "<<ch<<endl;
    cout<<"Entered name is = "<<name;

    getch();
}
//...5...Arithmatic op.
{
    int num1=10,num2=5;

    int sum =num1+num2;
    cout<<"sum "<<sum<<endl;

    int sub =num1-num2;
    cout<<"subtraction "<<sub<<endl;

    int mul =num1*num2;
    cout<<"multiple "<<mul<<endl;

    double div =(float)num1/num2;
    cout<<"division "<<div<<endl;

    int rem =num1 % num2;
    cout<<"reminder "<<rem<<endl;

    getch();
}
//##...6...Formating output
{
    float num1=10,num2=5;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(3);

    float sum =num1+num2;
    cout<<setw(15)<<"sum : "<<sum<<endl;

    //cout<<noshowpoint;
    float sub =num1-num2;
    cout<<setw(15)<<"subtraction : "<<sub<<endl;

    //cout<<showpoint;
    float mul =num1*num2;
    cout<<"multiple : "<<mul<<endl;

    double div =(float)num1/num2;
    cout<<"division : "<<div<<endl;

    //int rem =num1 % num2;
    //cout<<"reminder :"<<rem<<endl;

    getch();
}
//...7...Area triangle
{
    double base,height,area;

    cout<<"Enter Base: ";
    cin>>base;
    cout<<"Enter Height: ";
    cin>>height;

    area=1.0/2 * base * height;

    cout<<"Area of triangle = " <<area;

    getch();
}

//...8...Temperature converter
{
    double farn,cel;

    cout<<"Enter celcius: ";
    cin>>cel;

    farn = 1.8 * cel + 32;

    cout<<"Farenheit= " <<farn;
    getch();
}
//...9...Assignment op..
{
    int x=3;
    int y=2;
    x+=y;
    cout<<x<<endl;

    x-=y;
    cout<<x<<endl;

    x+=2;
    cout<<x<<endl;

    x*=3;
    cout<<x<<endl;

    x%=2;
    cout<<x<<endl;

    getch();
}
//...10...Unary op..
{
    int x=6;
    int result = -x;
    //int y = x--;
    //int y = --x;
    //int y = x++;
    int y = ++x;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<< result;

    getch();
}
//...11...Bitwise op..
{
    int a=32 ,b=12,c;

    c=a&b;
    cout<<c<<endl;

    c=a|b;
    cout<<c<<endl;

    c=a^b;
    cout<<c<<endl;

    c=a>>3;// "a divided by 2" 3 times
    cout<<c<<endl;

    c=a<<4;// "a multiple by 2" 4 times
    cout<<c<<endl;

    getch();
}
//##...12...special op..
{
    int a;
    float f;
    double d;
    char ch;
    char name[15];

    int x = sizeof(a);
    cout<<x<<endl;

    int y = sizeof(f);
    cout<<y<<endl;

    int z = sizeof(d);
    cout<<z<<endl;

    int m = sizeof(ch);
    cout<<m<<endl;

    int n = sizeof(name);
    cout<<n<<endl;
}
//...13...comma op..
{
    int x,y,sum;
    sum = (x=20,y=35,sum=x+y);
    cout<<sum;

    getch();
}
//...14...if statement..
{
    int x;
    cout<<"Enter any integer: ";
    cin>>x;
    if(x>0){
        cout<<"positive";
    }
    if(x<0){
        cout<<"negtive";
    }

    if(x=0){
        cout<<"Zero";
    }
    getch();
}
//...15...if statement
{
    int x;
    cout<<"Enter any integer: ";
    cin>>x;
    if(x>0){
        cout<<"positive";
    }
    cout<<" Hello";

}
//...16...Else if statement..
{
    int x;
    cout<<"Enter any integer: ";
    cin>>x;
    if(x>0){
        cout<<"positive";
    }
    else if(x<0){
        cout<<"negtive";
    }

    else if(x==0){
        cout<<"Zero";
    }
    getch();
}
//...17...Else statement..
{
    int x;
    cout<<"Enter any integer: ";
    cin>>x;
    if(x>0){
        cout<<"positive";
    }
    else if(x<0){
        cout<<"negtive";
    }
    else{
        cout<<"Zero";
    }
    getch();
}
//...18...Even or odd..
{
    int x;
    cout<<"Enter any integer: ";
    cin>>x;
    if(x%2==0){
        cout<<"Even";
    }
    else{
        cout<<"odd";
    }
    getch();
}
//...19...Large number..
{
    int x,y;
    cout<<"Enter two integer: ";
    cin>>x>>y;
    if(x>y){
        cout<<"large="<<x;
    }
    else{
        cout<<"large="<<y;
    }
    getch();
}
//...19...Large number..
{
    int x;
    cout<<"Enter your marks: ";
    cin>>x;
    if(x>=33){
        cout<<"pass";
    }
    else{
        cout<<"Fail";
    }
    getch();
}
//...20...Absulate value..
{
    int x;
    cout<<"Enter any int: ";
    cin>>x;
    if(x<0){
        cout<<(-x);
    }
    else{
        cout<<x;
    }
    getch();
}
//...21...Later grade..
{
    int x;
    cout<<"Enter any int: ";
    cin>>x;
    if(x<0){
        cout<<"invalid";
    }
    else if(x>100){
        cout<<"invalid";
    }
    else if(x>=80){
        cout<<"A+";
    }
    else if(x>=70){
        cout<<"A";
    }
    else if(x>=60){
        cout<<"A-";
    }
    else if(x>=50){
        cout<<"B";
    }
    else if(x>=40){
        cout<<"C";
    }
    else if(x>=33){
        cout<<"D";
    }
    else {
        cout<<"Fail";
    }

    getch();
}

//...22...Vowel / Consonant..
{
    char ch;
    cout<<"enter any letter: ";
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='Uo'){
        cout<<"Vowel";
    }
    else
        cout<<"Consonant";
}
//##...23...Vowel / Consonant tolower & toupper..
{
    char ch;
    cout<<"enter any letter: ";
    cin>>ch;
    ch = tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<"Vowel";
    }
    else
        cout<<"Consonant";
}
//...24...Large number for three value..
{
    int x,y,z;
    cout<<"Enter three integer: ";
    cin>>x>>y>>z;
    if(x>y &&x>z){
        cout<<"large="<<x;
    }
    else if(y>x &&y>z){
        cout<<"large="<<y;
    }
    else
        cout<<"large="<<z;
    getch();
}
//##...25...leap year..
{
    int x;
    cout<<"Enter any year: ";
    cin>>x;
    if(x%4==0 && x%100!=0){
        cout<<"Leap year";
    }
    else if(x%400==0){
        cout<<"Leap year";
    }
    else
        cout<<"Not leap year";
    getch();
}
//##...26...nested if..
{
     int x;

     cout<<"Enter any int: ";
     cin>>x;
     if(x>32){

          if(x<0){
             cout<<"invalid";
          }
          else if(x>100){
             cout<<"invalid";
          }
          else if(x>=80){
             cout<<"A+";
          }
          else if(x>=70){
             cout<<"A";
          }
          else if(x>=60){
             cout<<"A-";
          }
          else if(x>=50){
             cout<<"B";
          }
          else if(x>=40){
             cout<<"C";
          }
          else if(x>=33){
            cout<<"D";
          }
     }
     else
        cout<<"fail";

    getch();
}
//##...27...conditional op...
{
    int x=19,y=12;
    int max=(x>y) ? x:y;
    cout<<max;

    getch();
}
//##...28...conditional op 2...
{
    int num;
    cout<<"enter any number: ";
    cin>>num;
    (num%2==0) ? cout<<num<<" is even":cout<<num<<" is odd";

    getch();
}
//...29...switch statement...
{
    int num;
    cout<<"enter any number: ";
    cin>>num;

    switch(num)
    {
    case 0:
        cout<<"zero";
        break;
    case 1:
        cout<<"one";
        break;
    case 2:
        cout<<"two";
        break;
    case 3:
        cout<<"three";
        break;
    case 4:
        cout<<"four";
        break;
    case 5:
        cout<<"five";
        break;
    case 6:
        cout<<"six";
        break;
    default:
        cout<<"Not a number";

    }
    getch();
}
//##...30...Vowel/consonant cheack...
{
    char ch;
    cout<<"enter any letter: ";
    cin>>ch;

    ch=tolower(ch);

    switch(ch)
    {
    case 'a':
        //cout<<"Vowel";
        //break;
    case 'o':
        //cout<<"vowel";
        //break;
    case 'i':
        //cout<<"vowel";
        //break;
    case 'u':
        //cout<<"vowel";
        //break;
    case 'e':
        cout<<"vowel";
        break;
    default:
        cout<<"Consonant";

    }
    getch();
}
//...31...For loop...
{
    for(int i=1;i<=10;i++){
        cout<<"i love bangladesh : "<<i<<endl;
    }
    getch();
}
//...32...While loop...
{
    int i=1;             //=initialization
    while(i<=10){        //=condition
        cout<<"i love bangladesh : "<<i<<endl;
        i++;             //=inc/dec
    }
    getch();
}
//...32...Do While loop...
{
    int i=100;          //=initialization

    do{
       cout<<"i love bangladesh : "<<i<<endl;
       i--;            //=condition
    }
    while(i>=1);       //=inc/dec

    getch();
}
//...34...Break...
{
    for(int i=1;i<=100;i++){
        if(i==10){
            break;
        }
        cout<<i<<endl;
    }
}

//...35...continue...
{
    for(int i=1;i<=100;i++){
        if(i==10){
            continue;
        }
        cout<<i<<endl;
    }
}
//...36...multiplication table...
{
    int n;
    cin>>n;

    for(int i=1;i<=10;i++){
        cout<<n<< " X "<<i<<" = "<<(n*i)<<endl;
    }
}
#//...37...1+2+3+...+n
{
    int sum=0,n;
    cin>>n;

    for(int i=1;i<=n;i++){
            sum=sum+i;
    }
    cout<<sum<<endl;
    getch();
}
#//...38...1.5+2.5+3.5+...+n
{
    float i,sum=0,n;
    cin>>n;

    for(i=1.5;i<=n;i++){
            sum=sum+i;
    }
    cout<<sum<<endl;
    getch();
}
#//...39...1^5+2^5+3^5+...+n^5
{
    int i,sum=0,n;
    cin>>n;

    for(i=1;i<=n;i++){
            //sum=sum+ i*i*i*i*i;
            sum=sum+ pow(i,5);

    }
    cout<<sum<<endl;
    getch();
}
#*///...40...pattern
{
    int n,row,col;
    cout<<"Enter the line: ";
    cin>>n;

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            cout<<" "<<row;
        }
        cout<<endl;
    }
}
