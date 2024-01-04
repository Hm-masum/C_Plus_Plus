#include <bits/stdc++.h>
using namespace std;
/*
//...01...GCD
int gcd(int a,int b)
{
    int remainder;
    while(b%a!=0)
    {
        remainder=b%a;
        b=a;
        a=remainder;
    }
    return a;
}

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<gcd(x,y);


}

//...02...LCM
int gcd(int a,int b)
{
    int remainder;
    while(b%a!=0)
    {
        remainder=b%a;
        b=a;
        a=remainder;
    }
    return a;
}

int Lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<Lcm(x,y);


}
//...03...GCD & LCM function

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<__gcd(x,y);
   cout<<(x/__gcd(x,y))*y<<endl;
}

//...04...PRIME Num

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool check=true;

        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0){
                check = false;
                break;
            }
        }

        if(check)
            cout<<"Prime"<<endl;;
        else
            cout<<"Not Prime"<<endl;
    }
}

//...05...Find all divisor

void alldivisor(int n)
{
    vector<int>v;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0){
            v.push_back(i);
            v.push_back(n/i);
        }
    }
    int len=v.size();

    for(int i=0;i<len;i++)
    {
        cout<<v[i]<<" ";
    }

}
int main(){
    int n;
    cin>>n;
    alldivisor(n);
}

//...06...Sieve of Eratosthens

void Sieve(int n)
{
    int marked[n+5]={};

    for(int i=2;i*i<=n;i++)
    {
        if(marked[i]==0)
        {
            for(int j=i+i;j<=n;j+=i)
            {
               marked[j]=1;
            }
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(marked[i]==0)
        {
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    Sieve(n);
}

//...07...Prime factorization

int main(){
    int n;
    cin>>n;
    for(int i=2;i*i<=n;i++)
    {
        int cnt=0;
        while(n%i==0)
        {
            n/=i;
            cnt++;
        }
        if(cnt){
            cout<<i<<'^'<<cnt<<endl;
        }
    }
    if(n>1)
        cout<<n<<"^1";
}
*/
//...08...Binary search

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=1;j<=k;j++)
    {
        int value;
        cin>>value;
        int l=0,r=n-1,mid,flag=0;

        while(l<=r)
        {
            mid=(l+r)/2;
            if(arr[mid]==value)
            {
                flag=1;
                break;
            }
            else if(arr[mid]>value)
            {
                r=mid-1;
            }
            else if(arr[mid]<value)
            {
                l=mid+1;
            }
        }
        if(flag==1)
        {
            cout<<"Yes"<<endl;
        }
        else
             cout<<"NO"<<endl;
    }
}
