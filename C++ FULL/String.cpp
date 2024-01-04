#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
using namespace std;
/*//...1...Basic
int main()
{
    char name[20];
    cout<<" Enter your name: ";
    gets(name);
    cout <<" Welcome "<<name;

    getch();
}
//...2...Basic
int main()
{
    char message[6]={'h','e','l','l','o'};
    char name[30];
    cout<<"enter your name : ";
    gets(name);
    cout << message << endl;
    cout<<name;
    getch();
}
//...3... Strlen & Strcpy
int main()
{
    char name1[]="Anisul";
    char name2[30];
    int len=strlen(name1);
    cout<<"length of string = "<<len<<endl;

    strcpy(name2,name1);
    cout<<"Name 2 = "<<name2;

    getch();
}
//...4... Strcat
int main()
{
    char name1[]="Anisul";
    char name2[]=" islam";
    strcat(name1,name2);
    cout<<name1;
    getch();
}
//...5... Strlwr & Strupr
int main()
{
    char name1[]="Anisul";
    //strupr(name1);
    strlwr(name1);
    cout<<name1;
    getch();
}
//...6... Strcmp
int main()
{
    char name1[]="Anisul";
    char name2[]="anisul";
    int value = strcmp(name1,name2);

    if(value==0)
        cout<<"String are equal";
    else
        cout<<"String are not equal";
    getch();
}
//...7... String class
int main()
{
    string str1="Anisul";
    string str2=" islam";
    string str3;
    str3=str1;
    cout<<str3<<endl;

    str3=str1+str2;
    cout<<"str1 + str2 = "<<str3<<endl;
    int len = str1.size();
    cout<<len;

    getch();
}
*/
//...8... UPPER letter position print from a string
int main()
{
    string str;
    cin>>str;
    int num=str.length();
    for(int i=0;i<num;i++)
    {
        //cout<<str[i]<<" ";
        int x=(int)str[i];
        if(x<97)
        {
            cout<<i+1;
        }
    }
}
