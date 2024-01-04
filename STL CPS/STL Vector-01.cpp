#include <bits/stdc++.h>
using namespace std;
/*
//...1...STL Basic
int main()
{
    int a[4];
    vector<int> v;

    v.push_back (2);
    v.push_back (3);
    v.push_back (5);
    v.push_back (6);

    cout<<v.size()<<endl;
    cout<<v[2]<<endl;
    v[2]= 10;
    cout<<v[2]<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

//...2...Number of n inputing vector
int main()
{
     int n;
     vector<int> v;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         int a;
         cin>>a;
         v.push_back (a);
     }

     cout<<v.size()<<endl;
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }

}

//...3...Number of n showing vector
int main()
{
     vector<int> v = {2,3,4,5};
     cout<<v.size()<<endl;
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }

}

//...4...Delating vector
int main()
{
     vector<int> v = {2,3,4,5};
     v.clear();

     cout<<"SIZE : "<<v.size()<<endl;
     cout<<v.empty()<<endl;

     v = {2,3,4,5};

     cout<<"SIZE : "<<v.size()<<endl;
     cout<<v.empty()<<endl;
}

//...5...Resize vector
int main()
{
     vector<int> v = {2,3,4,5};
     v.resize(10);

     cout<<v.size()<<endl;
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
}

//...6...Resize vector 2
int main()
{
     vector<int> v;
     v.resize(10);

     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>v[i];
     }

     cout<<v.size()<<endl;
     for(int i=0;i<n;i++)
     {
        cout<<v[i]<<" ";
     }

}

//...7...Access specific vector
int main()
{
     vector<int> v(10);

     cout<<v.size()<<endl;
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
     v[4]=10;
     cout<<endl<<v[4]<<endl;

}

//...8...Building vector
int main()
{
     vector<int> v(10,5);

     cout<<v.size()<<endl;
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
}

//...9...Coping vector
int main()
{
     vector<int> v={2,3,4,5};
     vector<int> tmp;

     tmp=v;

     cout<<tmp.size()<<endl;
     for(int i=0;i<tmp.size();i++)
     {
        cout<<tmp[i]<<" ";
     }
     cout<<endl;

     cout<<v.size()<<endl;
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
}

//...10...Addressing vector
int main()
{
     vector<int> v={2,3,4,5};

     vector<int>::iterator it;

     for(it=v.begin();it!=v.end();it++)
     {
         cout<<*it<<" ";
     }
}

//...11...For Each loop
int main()
{
     vector<int> v={2,3,4,5};

     for(auto u: v)
     {
         cout<<u<<" ";
     }
     cout<<endl;
}

//...12...input by vector
int main()
{
    int n;
    vector<int>v;

    while(cin>>n){
        if(n==0) break;
        v.push_back(n);
    }
    cout<<v.size()<<endl;

    for(auto u:v) cout<<u<<" ";
}

//...13...vector sort   complexity=0[nlog2(n)]
int main()
{
    vector<int>v={9,8,7,6,5,4,3};

    sort(v.begin()+1,v.begin()+5);

    for(auto u:v) cout<<u<<" ";
}

//...14...vector sort (reversly)
int main()
{
    vector<int>v={4,5,2,3,7,1,8};

    //sort(v.begin(),v.end(),greater<int>());
    sort(v.rbegin(),v.rend());

    for(auto u:v) cout<<u<<" ";
}

//...15...vector element delete
int main()
{
    vector<int>v={2,3,4,5,6,7};

    cout<<v.back()<<endl;    //last element print
    v.pop_back();            //Last element delete      //0(1)
    cout<<v.back()<<endl;

    cout<<*v.begin()<<endl;  //1st element print
    v.erase(v.begin()+1);      //pointer element delete   //0(n)

    for(auto u:v) cout<<u<<" ";
}
*/
//...16...vector element delete (reversly)
int main()
{
    vector<int>v={2,3,4,5,6,7};

    reverse(v.begin(),v.end());

    while(!v.empty()){
        cout<<v.back()<<endl;
        v.pop_back();
    }

}











