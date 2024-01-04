#include <bits/stdc++.h>
using namespace std;

/*
// *****VECTOR*****
//...01...PUSH BACK
int main()
{
    int num;
    vector<int> v;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }

    for(int i=0;i<num;i++)
    {
        cout<<v[i]<<" ";
    }
}

//...02...POP back & PUSH back
int main()
{
    int num;
    vector<int> v;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }
    cout<<"SIZE : "<<v.size()<<endl;

    v.pop_back();
    cout<<"SIZE : "<<v.size()<<endl;

    v.pop_back();
    cout<<"SIZE : "<<v.size()<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

}

//...03...EMPTY function
int main()
{
    int num;
    vector<int> v;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    if(v.empty())
    {
        cout<<"kali";
    }
    else
        cout<<"ASEH";
}

//...04...CLEAR function
int main()
{
    int num;
    vector<int> v;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }

    v.clear();

    if(v.empty())
    {
        cout<<"kali";
    }
    else
        cout<<"ASEH";
}

//...05...COUNT Function
int main()
{
    int num;
    vector<int> v;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }

    cout<<count(v.begin(),v.end(),5

    cout<<count(v.begin(),v.begin()+3,5);
}

//...06...FIND Function
int main()
{
    int num;
    vector<int> v;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }

    if(find(v.begin(),v.end(),5) != v.end()){
        cout<<"Paise";
    }
    else
        cout<<"paini";


}

//...07...ERASE Function
int main()
{
    int num;
    vector<int> v;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }

  //  v.erase(v.begin()+3);
    v.erase(v.begin()+1,v.begin()+4);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

//...08...REVERSE Function
int main()
{
    int num;
    vector<int> v;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }

    reverse(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

//...9...COMPARE
int main()
{
    int num;
    vector<int> v1;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        int n;
        cin>>n;
        v1.push_back(n);
    }

    vector<int> v2;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        int n;
        cin>>n;
        v2.push_back(n);
    }
    if(v1==v2)
    {
        cout<<"Same";
    }
    else
        cout<<"Same na";
}

//...10...SWAP
int main()
{
    int num;
    vector<int> v1;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        int n;
        cin>>n;
        v1.push_back(n);
    }

    vector<int> v2;
    v2=v1;
    for(auto x:v2)
    {
        cout<<x<<" ";
    }
}

//...11...Vector PAIR
int main()
{
    vector<pair<int,int>>v;
    int x,y;

    for(int i=0;i<4;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }

    for(int i=0;i<4;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}



//*****STL*****
//...12... CONCATNATION
int main()
{
    string s1,s2;
    cin>>s1>>s2;

    string n;

    n=s1+" "+s2;
    cout<<n<<endl;
}

//...13...string to int
int main()
{
    string s1,s2;
    cin>>s1;

    int value= stoi(s1);

    cout<<value+2<<endl;
}

//...14...string to int
int main()
{
    string num=to_string(20);
    cout<<num;
}

//...15...string to int
int main()
{
    int n;
    string s;
    cin>>n;
    cin.ignore();
    getline(cin,s);
    cout<<s<<endl;
}


//  *****SET*****
//...16...SET
int main()
{
    set<int>s;

    for(int i=0;i<4;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }

    set<int>::iterator itr;
    for(itr=s.begin() ; itr!=s.end() ; itr++)
    {
        cout<< *itr <<endl;
    }
}


*/
//*****MAP*****
//...17...map
int main()
{
    map<int,string>mp;

    for(int i=1;i<=4;i++)
    {
        int x;
        string y;
        cin>>x>>y;
        mp.insert(make_pair(x,y));
    }

    map<int,string>::iterator itr;

    for(itr=mp.begin();itr!=mp.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }


}

