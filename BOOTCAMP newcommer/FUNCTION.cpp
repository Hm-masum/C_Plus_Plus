#include <bits/stdc++.h>
using namespace std;

/*
//.....01....Min & Max
int main()
{
    int a=5,b=10,c=15;

    cout<<min(b,c)<<endl;
    cout<<min({a,b,c})<<endl;
}

//.....02....Power & SWAP
int main()
{
    int a=5,b=2;

    cout<<pow(a,b)<<endl;;
    swap(a,b);
    cout<<pow(a,b);
}

//.....03....GCD & LCM & log
int main()
{
    int a=2,b=10;

    cout<<__gcd(a,b)<<endl;
    cout<<(a/__gcd(a,b))*b<<endl;
    cout<<log(10);
}

//.....04....ceil,floor,round
int main()
{
    double a=2.51;

    cout<<ceil(a)<<endl<<floor(a)<<endl<<round(a);
}

//.....05....squrt
int main()
{
    cout<<sqrt(25)<<endl;
}

//.....06....SUM OF N NUMBER
int sum(int n)
{
    int sm=(n*(n+1))/2;
    return sm;
}

int main()
{
    int n;
    cin>>n;
    cout<<sum(n);

}

//.....07....POWER FUNCTION
int power(int x,int y)
{
    int res=1;
    for(int i;i<=y;i++)
    {
        res=res*x;
    }
    return res;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
}

//.....08....MAX FUNCTION
int mx(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
        return y;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<mx(a,b);

}

//.....09....PRIME OR NOT
bool prime(int x)
{
    int cnt=0;
    for(int i=2;i<=x-1;i++)
    {
        if(x%i==0)
            cnt++;
    }
    if(cnt==0)
        cout<<"YES";
    else
        cout<<"NO";
}
int main()
{
    int a;
    cin>>a;
    prime(a);

}

//.....10....VOID fUNCTION
void ok()
{
        cout<<"IIUC"<<endl;
}
int main()
{
    for(int i=1;i<=10;i++)
       ok();
}
*/
//.....11....CALL BY
void swp(int &a,int &b)
{
        int temp=a;
        a=b;
        b=temp;
}
int main()
{
    int a=10,b=3;
    swp(a,b);
    cout<<a<<" "<<b<<endl;
}






