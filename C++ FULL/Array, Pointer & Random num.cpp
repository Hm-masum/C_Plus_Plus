#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
/*//...1...Array
{
    int i,marks[5]={55,45,35,25,85};
    //cout<<marks[0]<<endl;
    //cout<<marks[1]<<endl;
    //cout<<marks[2]<<endl;
    //cout<<marks[3]<<endl;
    //cout<<marks[4]<<endl;
    for(i=0;i<5;i++){
        cout<<marks[i]<<endl;
    }
}
//...2...getting input Array
{
    int i,marks[5];
    //cin<<marks[0];
    //cin<<marks[1];
    //cin<<marks[2];
    //cin<<marks[3];
    //cin<<marks[4];
    for(i=0;i<5;i++){
        cout<<"marks for student "<<i+1<<": ";
        cin>>marks[i];
    }
    for(i=0;i<5;i++){
        cout<<marks[i]<<endl;
    }
}
//...3...Student Application
{
    int n,i,sum=0;
    cout<<"Enter the students number: ";
    cin>>n;

    int student[n];

    for(i=0;i<n;i++){
            cout<<"Marks for student "<<i+1<<": ";
            cin>>student[i];
            sum=sum+student[i];
    }
    cout<<"Total marks: "<<sum<<endl;
    float avg=(float) sum/n;
    cout<<"Average: "<<avg<<endl;

    int max=student[0];
    int min=student[0];

    for(i=0;i<n;i++){
        if(max<student[i]){
            max=student[i];
        }
         if(min>student[i]){
            min=student[i];
        }
    }
    cout<<"Maximum Marks: "<<max<<endl;
    cout<<"Minimum Marks: "<<min;
    getch();
}
//...4...2D Array..
{
    int A[2][3] = {
                   {10,22,33},
                   {33,45,67}
                  };

    //A[0][0]=10;
    //A[0][1]=20;
    //A[0][2]=30;
    //A[1][0]=40;
    //A[1][1]=50;
    //A[1][2]=60;

    for(int row=0;row<2;row++)
    {
        for(int col=0;col<3;col++){
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }
    getch();
}
//...5...Getting input 2D Array..
{
    int A[2][3];

    cout<<"Enter elements for the metrix "<<endl;
    for(int row=0;row<2;row++)
    {
        for(int col=0;col<3;col++){
            cout<<"A["<<row<<"]["<<col<<"] = ";
            cin>>A[row][col];
        }
    }


    for(int row=0;row<2;row++)
    {
        for(int col=0;col<3;col++){
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }
    getch();
}
//...7...pointer...
{
    int x=5;
    int *p;
    p=&x;

    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;

}
//...8...Adding 2 number using pointer...
{
    int x=5;
    int y=7;
    int *p1,*p2;
    p1=&x;
    p2=&y;
    int sum = *p1 +*p2;

    cout<<sum<<endl;
    getch();
}

//...9...Random number
{
    for(int i=1;i<=5;i++){
        int randomNumber = rand()%5+1;
        cout<<"Random number = "<<randomNumber<<endl;
    }
}
*///...10...Random Number Game
{
   while(1)
   {
        int randomNumber,guessNumber;

    cout<<"Enter Guess Number: ";
    cin>>guessNumber;
    randomNumber = 1 +rand()%5;

    if(guessNumber==randomNumber){
        cout<<"You have won"<<endl<<endl;
    }
    else {
        cout<<"You have lost..Try again"<<endl;
        cout<<"random number was: "<<randomNumber<<endl<<endl;
    }
   }
}
