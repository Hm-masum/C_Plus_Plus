#include<bits/stdc++.h>
using namespace std;

/*
//....01....Recursion

void fun(int i)
{
    cout<<i<<endl;
    fun(i+1);
}

int main()
{
    int n;
    cin>>n;
    fun(1);

}

//....02....1 TO N

int n;
void fun(int i)
{
    if(i==(n+1)) return;     //Base Case

    cout<<i<<endl;
    fun(i+1);
}

int main()
{
    cin>>n;
    fun(1);
    return 0;
}

//....03....Fibonacci

int n;
int fun(int i)
{
    if(i==1) return 0;
    if(i==2) return 1;

    int x=fun(i-2);
    int y=fun(i-1);

    return (x+y);
}

int main()
{
    cin>>n;
    int ans = fun(n);
    cout<<ans;
    return 0;
}

//....04....N TO 1

int n;
void fun(int i)
{
    if(i==0) return ;

    cout<<i<<endl;
    fun(i-1);
}

int main()
{
    cin>>n;
    fun(n);
    return 0;
}
*/
//....05....Factorial of N

int n;
int ans=1;
int fun(int i)
{
    if(i==0) return 1;


    ans=i*(ans);
    fun(i-1);
}

int main()
{
    cin>>n;
    fun(n);
    cout<<ans;
    return 0;
}








