#include <bits/stdc++.h>
using namespace std;
/*
//###***MATH***###

//...01...XOR operator
int main()
{
    int a,b,q;
    cin>>a>>b>>q;

    if(q==1)
    {
        cout<<a;
    }
    else if(q==2)
    {
        cout<<b;
    }
    else
        cout<<(a^b);
}

//...02...Power without pow()

int POW(int a,int b)
{
    int res =1;
    for(int i=1;i<=b;i++)
    {
        res=res*a;
    }
    return res;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=POW(a,b);
    cout<<ans;
}

//...03...power of 2 using left shift(<<)

int main()
{
    int a;
    cin>>a;
    cout<<(1<<a);
}

//...04...binary representation of 2^x and 2^x-1

int main()
{
    long long int n;
    cin>>n;
    if((n & (n-1))==0)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
}

//...05...LOG2

long long LOG(long long base,long long n)
{
    long long cnt=0;
    while(n>0)
    {
        n=n/base;
        cnt++;
    }
    return(cnt-1);
}
int main()
{
    long long int base,n;
    cin>>base>>n;
    int ans=LOG(base,n);
    cout<<ans;
}

//...06...SUM of ODD,EVEN

int main()
{
    long long int n;
    cin>>n;
    cout<<"For Even : "<<endl<<n<<" th term "<<2*n<<endl;
    cout<<"sum of first "<<n<<" terms "<<n*(n+1)<<endl<<endl;

    cout<<"For Odd : "<<endl<<n<<" th term "<<2*n-1<<endl;
    cout<<"sum of first "<<n<<" terms "<<n*(n)<<endl;
}

//...07...SUM of Arithmetic progression(ar^n-1)

int main()
{
    long long int n,r,a;
    cin>>n>>r>>a;
    cout<<n<<" th term "<<a*pow(2,n-1)<<endl;
    cout<<"sum of first "<<n<<" terms "<<a*(pow(r,n)-1)<<endl<<endl;
}

//...08...nPr and nCr

long long int factorial(long long int x)
{
    long long int res=1;
    for(long long i=1;i<=x;i++)
    {
        res=res*i;
    }
    return res;
}
int main()
{
    long long int n,r;
    cin>>n>>r;

    long long nPr=factorial(n)/factorial(n-r);

    long long nCr=nPr/factorial(r);;

    cout<<nCr<<" "<<nPr;
}

//...09...All possible permutation using next_permutation() stl

int main()
{
    long long int n;
    cin>>n;

    long long arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    do
    {
        for(int i=0;i<n;i++)
        {
           cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    while(next_permutation(arr,arr+n));
}


//###***GEOMETRY***###

//...01...Distance between two point

int main()
{
    long long int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    long long int r1=(x1-x2)*(x1-x2);
    long long int r2=(y1-y2)*(y1-y2);
    long long int r=r1+r2;

    cout<<fixed<<setprecision(9);
    cout<<sqrt(r);
}

//...02...Nearest between two point

int main()
{
    long long int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    long long int r1=(x1-x2)*(x1-x2);
    long long int r2=(y1-y2)*(y1-y2);
    long long int ab=r1+r2;

    long long int r3=(x1-x3)*(x1-x3);
    long long int r4=(y1-y3)*(y1-y3);
    long long int ac=r3+r4;

    if(ab>ac)
        cout<<"C is nearest to A ";
    else
        cout<<"B is nearest to A ";
}

//...04...Circle Task

int main()
{
    long long int x1,y1,n,r;
    cin>>x1>>y1>>r>>n;
    long long red=r*r;

    for(int i=1;i<=n;i++)
    {
        long long x2,y2;
        cin>>x2>>y2;
        long long int r1=(x1-x2)*(x1-x2);
        long long int r2=(y1-y2)*(y1-y2);
        long long int ab=r1+r2;

        if(ab>red)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

//...05...TRIANGLE validity

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if((a+b>c) && (a+c>b) && (b+c>a))
    {
        double s=(a+b+c)/2;
        cout<<"Valid"<<endl;
        cout<<fixed<<setprecision(6);
        cout<<sqrt(s*(s-a)*(s-b)*(s-c));
    }
    else
        cout<<"Invalid"<<endl;
}
*/
//...06...Degree and radian coversion

#define PI 2*acos(0)
int main()
{
    //sin(),cos(),tan() take value as a radian
    cout<<sin(30*3.1416/180)<<endl;

    cout<<sin(90*PI/180);
}
