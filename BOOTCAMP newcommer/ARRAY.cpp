#include <bits/stdc++.h>
using namespace std;

/*
//.....01....Initialization
int main()
{
    int mark[5];
    mark[1]=4.99;
    mark[3]=5;
    mark[4]=5;
    cout<<mark[1]<<" "<<mark[0];

}

//.....02....Memset(0,1)func./value set.
int main()
{
    int n;
    cin>>n;
    int mark[n];
    memset(mark,-1,sizeof(mark));
    for(int i=0;i<n;i++)
        cout<<mark[i]<<" ";
}

//.....03....Minimum and Position
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mn=arr[0];
    int mp=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<mn)
        {
            mn=arr[i];
            mp=i;
        }
    }
    cout<<mn<<" "<<mp;

}

//.....04....shorting  EX= 5 1 3 4 2 =>1 2 3 4 5
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int s=0;s<n-1;s++)
    {
        int mn=arr[s];
        int mn_pos=s;
        for(int i=s+1;i<n;i++)
        {
            if(mn>arr[i])
            {
               mn=arr[i];
               mn_pos=i;
            }
        }
        swap(arr[s],arr[mn_pos]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}

//.....05....shorting function
int main() {
    int n;
    cin>>n;
    int a[n],i;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

//.....06....Decrease shorting
int main() {
    int n;
    cin>>n;
    int a[n],i;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

//.....07....Palindrome
int main() {
    int n;
    cin>>n;
    int a[n],j,i,flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
       if (a[i]!=a[j])
        {
         flag=1;
         break;
        }
    }
    if(flag == 1)
    {
        cout<<"NO";
    }
    else
         cout<<"YES";

}

//.....08....Sub Array
int main() {
    int n;
    cin>>n;
    int a[n],j,i,flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int s=0;s<n;s++)
    {
        for(int e=s;e<n;e++)
        {
            for(int p=s;p<=e;p++)
            {
                cout<<a[p]<<" ";
            }
            cout<<endl;
        }
    }
}

//.....09....MAX Sub Array
int main() {
    int n;
    cin>>n;
    int a[n],j,i,flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int s=0;s<n;s++)
    {
        for(int e=s;e<n;e++)
        {
            int mx=a[e];
            for(int p=s;p<=e;p++)
            {
                if(mx<=a[p])
                {
                    mx=a[p];
                }
                cout<<a[p]<<" ";
            }
            cout<<"max = "<<mx<<endl;
        }
    }
}
*/
//.....10....Sub seqence ...TOTAL=(2^n -1)
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    long long num_of_sub=pow(2,n)-1;
    for(int i=1;i<=num_of_sub;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                cout<<a[j]<<" ";
            }
        }
        cout<<endl;
    }
}

















