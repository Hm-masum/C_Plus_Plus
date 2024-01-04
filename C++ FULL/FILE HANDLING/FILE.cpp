#include <bits/stdc++.h>
#include<fstream>
using namespace std;
/*
//...01...FILE CREATE
int main()
{
    string name;
    ofstream file;
    file.open("student.txt");

    //file<<"I AM Masum.i am 22 years old.\n";
    cout<<"Enter your name : ";
    getline(cin,name);

    file<<"NAME : "<<name<<endl;

    file.close();

}

//...02...FILE APPEND
int main()
{
    string name;

    ofstream file;
    file.open("student.txt",ios::out|ios::app);

    cout<<"Enter your name : ";
    getline(cin,name);

    file<<"WELCOME : "<<name<<endl;

    cout<<"DATA IS STORED"<<endl;

    file.close();

}

//...03...STORING DATA
int main()
{
    string name;
    int age;
    ofstream file;
    file.open("student_details.txt",ios::out|ios::app);

    for(int i=1;i<=3;i++)
    {
        cout<<"Enter your name : ";
        getline(cin,name);
        file<<name<<"\t";

        cout<<"Enter your age : ";
        cin>>age;
        file<<age<<endl;
        cin.ignore();
    }

    file.close();

}
*/
//...04...FILE READ
int main()
{
    string name;
    ifstream file("details.txt");

    while(getline(file,name))
    {
        cout<<name<<endl;
    }
    file.close();

}
