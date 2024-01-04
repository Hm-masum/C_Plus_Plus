#include<bits/stdc++.h>
using namespace std;
/*
//...01...input string
int main()
{
     string s;
     getline(cin,s,);
     cout<<s<<endl;

}

//...02...input string without a word
int main()
{
     string s;
     getline(cin,s,'b');
     cout<<s<<endl;

}

//...03...multiple input string
int main()
{
    int t; cin>>t;
    cin.ignore();
    while(t--)
    {
         string s;
         getline(cin,s);
         cout<<s<<endl;
    }
}

//...04...multiple input string
int main()
{
    int t; cin>>t;
    cin.ignore();
    while(t--)
    {
         int len; cin>>len;

         cin.ignore();

         string s;
         getline(cin,s);
         cout<<s<<endl;
         cout<<len<<endl;
    }
}

//...05...String Length
int main()
{
    string s,t; cin>>s>>t;

    int len1,len2;

    len1=s.size();
    len2=(int) t.size();

    cout<<len1<<" "<<len2<<endl;
    cout<<s<<" "<<t<<endl;
}

//...06...ASCII value
int main()
{

    cout<<(int)'a'<<endl<<endl;
    for(int i='a';i<='z';i++)
    {
        cout<<i<<endl;
    }
}

//...07...Concatenation
int main()
{
    string s,t;
    cin>>s>>t;

    cout<<s+" "+t<<endl;
}

//...08...Compare
int main()
{
    string a,b;
    cin>>a>>b;
    if(a>b)
    {
        cout<<b<<endl;
    }
    else if(a<b)
    {
        cout<<a<<endl;
    }
    else
        cout<<"Same"<<endl;
}

//...09...push back Function
int main()
{
    string a;
    cin>>a;
    a.push_back('s');
    cout<<a<<endl;

}

//...10...pop back Function
int main()
{
    string a;
    cin>>a;
    a.pop_back();
    cout<<a<<endl;

}

//...11...front,back,begin and end func
int main()
{
    string a;
    cin>>a;
    cout<<a<<endl<<endl;

    cout<<a.front()<<endl;
    cout<<a[a.length()-2]<<endl;
    cout<<a.back()<<endl<<endl;

    cout<<*a.begin()<<endl;
     cout<<*(a.end()-1)<<endl;
}

//...12...Erase and Insert function
int main()
{
    string a;
    cin>>a;
    cout<<a<<endl<<endl;

    a.insert(a.end(),'A');
    cout<<a<<endl;

    a.insert(a.begin(),'A');
    cout<<a<<endl;

    a.erase(a.begin());
    cout<<a<<endl;

}

//...13...Shorting
int main()
{
    string a;
    cin>>a;
    cout<<a<<endl;

    sort(a.begin()+2,a.end());
    //sort(a.end()-5,a.end());
    cout<<a<<endl;

    sort(a.begin(),a.end());
    cout<<a<<endl;
}

//...14...int to string
int main(){
    int x;
    cin>>x;
    string s=to_string(x);
    cout<<s;
}

//...15...String to int
int main(){
    string s;
    cin>>s;

    int num;
    num= stoi(s);
    cout<<num;
}

//...16...char to int
int main(){
    char s;
    cin>>s;

    int num;
    num= s-'0';
    cout<<num;
}
*/
//...17...lower case e convert string
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        s[i]=tolower(s[i]);
    }
    sort(s.begin(),s.end());

    cout<<s;
}


