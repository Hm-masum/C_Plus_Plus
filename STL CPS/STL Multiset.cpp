#include <bits/stdc++.h>
using namespace std;
/*
//...01...Basic(Multiset sorted but not unique)
int main()
{
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(1);

    cout<<s.size()<<endl;

    for(auto u:s)
    {
        cout<<u<<" ";
    }
}

//...02...count and erase
int main()
{
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(1);

    cout<<s.count(1)<<endl;

    s.erase(1);
    for(auto u:s)
    {
        cout<<u<<" ";
    }
}
*/
//...03...Just 1 element delete by using find function
int main()
{
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(1);

    auto it=s.find(2);

    s.erase(it);
    for(auto u:s)
    {
        cout<<u<<" ";
    }

}
