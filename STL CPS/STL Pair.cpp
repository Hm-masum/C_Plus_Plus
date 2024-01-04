#include<bits/stdc++.h>
using namespace std;

/*
//...01...Basic
int main(){
    pair<string,vector<int>>p;

    p.first="Masum";
    p.second={1,2,3};
    cout<<p.first<<endl;

    for(auto u:p.second)
    {
        cout<<u<<" ";
    }
}

//...02...make_pair
int main(){
    pair<int,int>p;

    p=make_pair(2,3);

    cout<<p.first<<" "<<p.second<<endl;
    p.first++;
    cout<<p.first<<" "<<p.second<<endl;

    pair<string,vector<int>>p1;

    p1={"Masum",{1,2,3,4}};

    cout<<p1.first<<" "<<p1.second.size()<<endl;

}

//...03...Comparison
int main(){
    pair<int,int>p1,p2;

    p1={2,3};
    p2={3,1};

    if(p1<p2) cout<<"YES";
}

//...04...Minimum And maximum pair
int main(){
    pair<int,int>p1,p2;

    p1={2,3};
    p2={3,1};

    pair<int,int>x=min(p1,p2);
    cout<<x.first<<" "<<x.second<<endl;

    pair<int,int>p=max(p1,p2);
    cout<<p.first<<" "<<p.second;
}

//...05...vector of pair sort
int main(){
   vector<pair<int,int>>v;

   v.push_back({6,5});
   v.push_back({2,3});
   v.push_back({4,5});
   v.push_back({6,1});
   v.push_back({1,9});

   sort(v.begin(),v.end());
   for(auto u:v){
        cout<<u.first<<" "<<u.second<<endl;
   }
   cout<<endl;

   sort(v.rbegin(),v.rend());
   for(auto u:v){
        cout<<u.first<<" "<<u.second<<endl;
   }
}

//...06...pair of array sort
int main()
{
    pair<int,int>p[]= {{6,5},{2,3},{4,5},{6,3},{1,9}};


    sort(p,p+5);
    for(int i=0; i<5; i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }

}

//...07...vector of pair of sort diff. types
int main()
{
    vector<pair<string,int>>v;

    v.push_back({"Masum",21});
    v.push_back({"Akhi",12});
    v.push_back({"samira",35});
    v.push_back({"Masum",27});
    v.push_back({"Masud",34});
    v.push_back({"Mahfud",27});

    sort(v.begin(),v.end());
    for(auto u:v){
        cout<<u.first<<" "<<u.second<<endl;
   }
}

//...08...vector of pair of unique function
int main()
{
    vector<pair<string,int>>v;

    v.push_back({"Masum",21});
    v.push_back({"Akhi",12});
    v.push_back({"samira",35});
    v.push_back({"Masum",27});
    v.push_back({"Masud",34});
    v.push_back({"Mahfud",27});
    v.push_back({"Masum",21});
    v.push_back({"Akhi",12});

    sort(v.begin(),v.end());
    int sz=unique(v.begin(),v.end())-v.begin();
    for(int i=0;i<sz;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
   }
}

//...09...User input
int main(){

    pair<int,int>p;

    cin>>p.first>>p.second;

    cout<<p.first<<" "<<p.second<<endl;
}


//...10...Comparetor sort
bool cmp(const pair<int,int>&p1,const pair<int,int>&p2)
{
    if(p1.first>p2.first) return 1;
    else if(p1.first==p2.first) return(p1.second<p2.second);
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<pair<int,int>>v;
    v= {{4,143},{3,120},{4,500},{1,20}};
    sort(v.begin(),v.end(),cmp);
    for(auto u:v){
        cout<<u.first<<" "<<u.second<<endl;
    }
}



//..............PROBLEM...............

//...01....Count distinct pairs with difference k and pair will be unique(Geeksforgeek)

int arr[123];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        cin>>k;
        vector<pair<int,int>>v;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i!=j && arr[i]-arr[j]==k)
                {
                    v.push_back({arr[i],arr[j]});
                }
            }
        }
        sort(v.begin(),v.end());
        int sz=unique(v.begin(),v.end())-v.begin();
        cout<<sz<<endl;
    }
}

*/
//...02...Rank list

bool cmp(const pair<int,int>&p1,const pair<int,int>&p2)
{
    if(p1.first>p2.first) return 1;
    else if(p1.first==p2.first) return(p1.second<p2.second);
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i].first>>v[i].second;
        v[i].first *=-1;
    }
    //sort(v.begin(),v.end(),cmp);
    sort(v.begin(),v.end());

    int ans=0;
    for(auto u:v)
    {
        if(u==v[k-1])
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}


