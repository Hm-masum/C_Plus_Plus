#include <bits/stdc++.h>
using namespace std;
/*
//...01...Stack push and pop
int main()
{
    stack<int> st;           //(LIFO)=last input first output

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.size()<<endl;

    cout<<st.top()<<endl;
    st.pop();                 //Deleteing
    cout<<st.top()<<endl;

}

//...02...printing all element
int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}
*/

//..............PROBLEM..........

//...01...Balanced Brackets
bool isBalanced(char c1,char c2)
{
    return(c1=='(' && c2==')' || c1=='{' && c2=='}' || c1=='[' && c2==']');
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;

        stack<char>st;
        bool done=1;

        for(auto u:s){
            if(u=='(' || u=='{' || u=='[')
                {
                    st.push(u);
                }
            else
            {
                if(st.empty()){
                    done =0;
                    break;
                }
                else
                {
                    if(isBalanced(st.top(),u))
                    {
                        st.pop();
                    }
                    else{
                        done=0;
                        break;
                    }
                }
            }
        }
        if(!st.empty()) done =0;
        if(done) cout<<"YES\n";
        else  cout<<"NO\n";


    }
}




