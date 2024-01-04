#include <bits/stdc++.h>
using namespace std;
/*
//...01...Basic
int main()
{
    set<int> s={1,2,3,2,3,1};     //set always unique ans sorted

    cout<<s.size()<<endl;

    for(auto u:s)
    {
        cout<<u<<" ";
    }
}

//...02...Print by iterator
int main()
{
    set<int> s={1,2,3,2,3,1};

    set<int>::iterator it;

    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
}

//...03...Empty or not
int main()
{
    set<int> s={1,2,3,2,3,1};

    s.clear();
    cout<<s.empty()<<endl;
}

//...04...Insert function
int main()
{
    set<int> s={1,2,3,2,3,1};

    s.clear();
    cout<<s.empty()<<endl;

    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(1);            //log2(n)

    for(auto u:s)
    {
        cout<<u<<" ";
    }
}

//...05...Insert function
int main()
{
    set<int> s;

    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(1);

    cout<<s.count(2)<<endl;    //log2(n)
}

//...06...last and 1st element print but firstly it will sort
int main()
{
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(5);

    cout<< *s.begin()<<endl;    //log2(n)
    cout<< *(--s.end())<<endl;
    cout<< *(s.rbegin())<<endl;
}

//...07...erase function
int main()
{
    set<int> s;

    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(5);
    s.insert(4);
    s.insert(6);

    s.erase(2);
    cout<<"SIZE : "<<s.size()<<endl;

    for(auto u:s)
    {
        cout<<u<<" ";
    }
    cout<<endl;

    s.erase(s.begin());
    for(auto u:s)
    {
        cout<<u<<" ";
    }
    cout<<endl;

    s.erase(--s.end());
    for(auto u:s)
    {
        cout<<u<<" ";
    }
}

//...08...SET of string
int main()
{
    set<string> s;
    s.insert("masum");
    s.insert("rakib");
    s.insert("samira");
    s.insert("kasfi");
    s.insert("fishan");
    s.insert("masum");
    s.insert("rakib");
    s.insert("samira");
    s.insert("kasfi");
    s.insert("fishan");

    cout<<s.size()<<endl;

    for(auto u:s)            //luxgeographcally printed(sorted,unique))
    {
        cout<<u<<" ";
    }
}

//...09...SET of Pair
int main()
{
    set<pair<int,int>> s;
    s.insert({2,3});
    s.insert({4,1});
    s.insert({4,1});
    s.insert({2,1});
    s.insert({4,3});
    s.insert({5,1});
    s.insert({5,1});
    s.insert({5,4});


    cout<<s.size()<<endl;

    for(auto u:s)
    {
        cout<<u.first<<" "<<u.second<<endl;
    }
}

//...10...Decresing Order of int
int main()
{
    set<int,greater<int>> s;
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);


    cout<<"SIZE : "<<s.size()<<endl;

    for(auto u:s)
    {
        cout<<u<<" "<<endl;
    }
}

//...11...Decresing Order of string
int main()
{
    set<string,greater<string>> s;
    s.insert("masum");
    s.insert("rakib");
    s.insert("samira");
    s.insert("kasfi");
    s.insert("fawjia");
    s.insert("fishan");
    s.insert("fawjia");

    cout<<"SIZE : "<<s.size()<<endl;

    for(auto u:s)
    {
        cout<<u<<" "<<endl;
    }
}
*/
//...12...Decresing Order of pair
int main()
{
    set<pair<int,int>,greater<pair<int,int>>> s;
    s.insert({2,3});
    s.insert({4,1});
    s.insert({4,1});
    s.insert({2,1});
    s.insert({4,3});
    s.insert({5,1});
    s.insert({5,1});
    s.insert({5,4});


    cout<<s.size()<<endl;

    for(auto u:s)
    {
        cout<<u.first<<" "<<u.second<<endl;
    }
}
