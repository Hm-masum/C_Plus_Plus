#include<bits/stdc++.h>
using namespace std;
/*
//...01...SUB string
int main()
{
    string s;
    cin>>s;
    int n=s.size();

    cout<<(n*(n+1))/2 <<endl;

    for(int i=0;i<n;i++)
    {
         for(int j=i;j<n;j++)
         {
              for(int k=i;k<=j;k++)
              {
                  cout<<s[k];
              }
              cout<<endl;
         }
    }
}

//...02...COUNT SUB string
int main()
{
    string s;
    cin>>s;
    int n=s.size();

    cout<<(n*(n+1))/2 <<endl;

}

//...03...Substr func.
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    cout<<s.substr(1,3);
}

//...04...Sub string with func.
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int cnt=0;
    int sz;

    for(int i=0;i<n;i++)
    {
         for(int j=i;j<n;j++)
         {
             sz=j-i+1;
             cout<<s.substr(i,sz);
             cout<<endl;
         }
    }
}

//...05...SUB Sequence.
int main()
{
   string s;
   cin>>s;
   int total_element=s.size();

   int point;
   int total=(1<<total_element);

   for(int i=0;i<total;i++)
   {
       string temp;
       point=1;
       for(int j=total_element-1;j>=0;j--)
       {

           if((point & i)!=0){
               temp.push_back(s[j]);
           }
           point = (point<<1);
       }
       reverse(temp.begin(),temp.end());
       cout<<temp<<endl;
   }
}
*/
//...06...Palindrome
int main()
{
    string s;
    cin>>s;
    string s2=s;

    reverse(s.begin(),s.end());

    if(s==s2){
        cout<<"YES";
    }
    else
        cout<<"NO";
}
