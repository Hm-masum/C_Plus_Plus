#include <bits/stdc++.h>
using namespace std;
/*
//...01...frequency Array
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=1;i<=5;i++)
    {
        int cnt=0;
        for(int j=0;j<=n;j++)
        {
            if (i==a[j])
            {
                cnt++;
            }
        }
        cout<<i<<" = "<<cnt<<endl;
    }
}
*/
//...02...frequency Array
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=1;i<=5;i++)
    {
        int cnt=0;
        for(int j=0;j<=n;j++)
        {
            if (i==a[j])
            {
                cnt++;
            }
        }
        cout<<i<<" = "<<cnt<<endl;
    }

}
