#include <bits/stdc++.h>
using namespace std;
/*
//...01...Basic map
int main()
{
    map<string,int> id;          //1st-index 2nd-var er datatype

    id["masum"]=1;
    id["rakib"]=3;
    id["kasfi"]=4;
    id["samira"]=9;

    cout<<id["kasfi"]<<endl;
    cout<<id["sgill"];
}

//...02...using index & value string
int main()
{
    map<string,string> gender;

    gender["masum"]="male";
    gender["kasfi"]="female";
    cout<<gender["kasfi"]<<endl<<gender["masum"]<<endl;
}

//...03...Frequency of long long int
int main()
{
    vector<long long> v= {1,1212020202020202,3244235232524,1212020202020202};

    map<long long,int>cnt;             //map always sorted
    for(int i=0; i<v.size(); i++)
    {
        cnt[v[i]]++;
    }

    cout<<cnt[1212020202020202]<<endl;

    for(auto u:cnt)
    {
        cout<<u.first<<" "<<u.second<<endl;
    }

}

//...04...Frequency of string
int main()
{
    map<string,int>id;      //map always maintain order

    id["masum"]=1;
    id["masud"]=5;
    id["rakib"]=3;
    id["rakib"]=9;
    id["kasfi"]=4;
    id["samira"]=9;
    id["dina"]=8;           //log2(n)


    for(auto u:id)
    {
        cout<<u.first<<" "<<u.second<<endl;
    }

}

//...05...unique using map
int main()
{
    map<int,bool> vis;
    vector<int> v={2,2,1,1,3};

    for(auto u:v)
    {
        vis[u]=1;
    }

    for(auto u:vis)
    {
        cout<<u.first<<" "<<u.second<<endl;
    }
}

//...06...input map with high string
int main()
{
    map<string,int>id;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        int d;
        cin>>s>>d;
        id[s]=d;
    }
    for(auto u:id)
    {
        cout<<u.first<<" "<<u.second<<endl;
    }
}

//...07...map er unique size
int main()
{
    map<int,int>c;
    c[1]=1;
    c[2]=2;
    c[3]=3;
    c[3]=5;

    cout<<c.size()<<endl;
}


//..............PROBLEM..........

//...01...How much frq. of word is 2 in a string (Amajon problem)
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       map<string,int> cnt;
       for(int i=0;i<n;i++)
       {
           string s;
           cin>>s;
           cnt[s]++;
       }
       int ans=0;
       for(auto u:cnt)
       {
           if(u.second==2)
           {
               cout<<"Case : "<<u.first<<endl;
               ans++;
           }
       }
       cout<<ans;
   }
}
*/
//...02...MAX frq. of word in a string and how much (Amajon problem)
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      string s;
      char c;
      cin>>c;
      getline(cin,s);
      s=c+s;

      string temp;
      vector<string>v;

      for(auto u:s)
      {
          if(isspace(u))
          {
              v.push_back(temp);
              temp.clear();
          }
          else
            temp+=u;
      }
      v.push_back(temp);

      map<string,int>cnt;

      int mxfrq=0;
      for(auto u:v)
      {
          cnt[u]++;
          mxfrq=max(mxfrq,cnt[u]);
      }

      string ans;

      for(auto u:v)
      {
          if(cnt[u]==mxfrq)
             {
                 ans=u;
                 break;
             }
      }
      cout<<ans<<" "<<mxfrq<<endl;
   }
}

