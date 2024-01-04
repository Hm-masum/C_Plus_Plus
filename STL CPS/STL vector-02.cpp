#include <bits/stdc++.h>
using namespace std;
/*
//...01...Unique vector
int main()
{
    vector<int> v = {2,3,5,5,7,7,1};
    sort(v.begin(),v.end());

    int len=unique(v.begin(),v.end())-v.begin();

    cout<<len<<endl;

    for(int i=0;i<len;i++)
    {
        cout<<v[i]<<" ";
    }
}


//...02...Max element and index
int main()
{
    vector<int> v = {2,3,5,5,7,7,1};

    vector<int>:: iterator it = max_element(v.begin(),v.end());

    cout<<"Max element : "<<*it<<endl;

    int n= max_element(v.begin(),v.end())-v.begin();
    cout<<"index : "<<n;
}


//...03...Min element and index
int main()
{
    vector<int> v = {2,3,5,5,7,7,1};

    vector<int>:: iterator it = min_element(v.begin(),v.end());

    cout<<"Max element : "<<*it<<endl;

    int n= min_element(v.begin(),v.end())-v.begin();
    cout<<"index : "<<n;
}


//...04...2D vector
int main()
{
    vector< vector<int> > v ;
    vector<int> a1={2,3,4};
    vector<int> a2={2,3,4,5,6};

    v.push_back(a1);
    v.push_back(a2);

    for(auto u:v)
    {
        for(auto g:u){
            cout<<g<<" ";
        }
        cout<<endl;
    }

}

*/
//...05...is_sorted function
int main(){
    vector<int>v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];

    }
    if(is_sorted(v.begin(),v.end())){
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}






