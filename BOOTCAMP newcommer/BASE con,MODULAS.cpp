#include<bits/stdc++.h>
using namespace std;


/*
//...01...Decimal to binary
int main()
{
    int n;
    cin>>n;
    int bin[32];
    int i=0;
    while(n>0)
    {
        bin[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<bin[j];
    }
}

//...02...Decimal to Octal
int main()
{
    int n;
    cin>>n;
    int oct[100];
    int i=0;
    while(n>0)
    {
        oct[i]=n%8;
        n=n/8;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<oct[j];
    }
}

//...03...Decimal to hexadecimal
int main()
{
    int n;
    cin>>n;
    int hex[100];
    int i=0;
    while(n>0)
    {
        hex[i]=n%16;
        n=n/16;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        if(hex[j]==10)
        {
            cout<<"A";
        }
        else if(hex[j]==11)
        {
            cout<<"B";
        }
        else if(hex[j]==12)
        {
            cout<<"C";
        }
        else if(hex[j]==13)
        {
            cout<<"D";
        }
        else if(hex[j]==14)
        {
            cout<<"E";
        }
        else if(hex[j]==15)
        {
            cout<<"F";
        }
        else
        {
            cout<<hex[j];
        }

    }
}

//...04...Decimal to any other number syestem
char numtochar(int digit)
{
    if(digit>=0 && digit<=9)
    {
        return digit +'0';
    }
    else
        return (digit-10)+'A';
}

string Decimal_To(long long num,int base)
{
    string result;
    int digit;

    while(num>0)
    {
        digit=num%base;

        result.push_back(numtochar(digit));
        num=num/base;
    }
    reverse(result.begin(),result.end());
    return result;
}
int main()
{
    long long int num,base;
    cout<<"Enter the Number and Base : ";
    cin>>num>>base;

    cout<<Decimal_To(num,base);
}

//...05...Binary to Decimal
int main()
{
    int n;
    cin>>n;
    int bin[100];

    for(int i;i<=8;i++)
    {
        bin[i]=n%10;
        n=n/10;
    }
    int dec=0,cnt;
    for(int i=7;i>=0;i--)
    {
        cnt=bin[i]*(pow(2,i));
        dec+=cnt;
    }
    cout<<dec;

}

//...06...Octal to Decimal
int main()
{
    int n;
    cin>>n;
    int ans=0,dec=0;
    int i=0;
    while(n!=0)
    {
        ans=n%8;

        dec=ans*(pow(8,i));
        n=n/8;
        i++;
    }

    cout<<dec;

}

//...07...Any other number syestem To Decimal
char chartonum(char digit)
{
    if(digit>='0' && digit<='9')
    {
        return digit -'0';
    }
    else
        return (digit-'A')+10;
}

long long To_Decimal(string num,int base)
{
    long long result=0,power=1;
    int len, digit;

    len=num.length();
    reverse(num.begin(),num.end());
    for(int i=0;i<len;i++)
    {
        digit=chartonum(num[i]);
        if(digit>=base) return -1;
        result =result+(digit*power);
        power=power*base;
    }

    return result;
}
int main()
{
    string num;
    int base;
    cout<<"Enter the Number and Base : ";
    cin>>num>>base;

    cout<<To_Decimal(num,base);
}


//...08...Modular Arithmetic
int main()
{
    cout<<((-17) % 5 )+5 <<endl;
}

*/
//...09...Multiple Modulas(modulas by 25)
int main()
{
    long long a[4]={10000,3465467,65543112,12345678};
    long long res =1;
    int m=29;
    for(int i=0;i<4;i++)
    {
        res=((res%m) * a[i]%m)%m;
    }
    cout<<res<<endl;
}
