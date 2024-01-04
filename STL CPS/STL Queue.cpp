#include <bits/stdc++.h>
using namespace std;
/*
//...01...Basic queue (FIFO)
int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
}

//...02...Show all elements and size
int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.size()<<endl;

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}



//=========DEQUEUE=========

//...01...Basic dequeue(First e push and pop also last e push and pop)
int main(){
    deque<int>dq;

    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);
    dq.push_back(4);
    dq.push_back(5);

    //  3 2 1 4 5

    cout<<dq.front()<<" "<<dq.back()<<endl;

    dq.pop_front();
    cout<<dq.front()<<" "<<dq.back()<<endl;

    dq.pop_back();
    cout<<dq.front()<<" "<<dq.back()<<endl;
}

//...02...Size and empty function
int main(){
    deque<int>dq;

    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);
    dq.push_back(4);
    dq.push_back(5);

    cout<<dq.size()<<endl;
    cout<<dq.empty()<<endl;
}



//=========PRIORITY EQUEUE=========


//...01...Basic priority queue(sorted upper to lower)
int main()
{
    priority_queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
}

//...02...empty and size function
int main()
{
    priority_queue<int>q;
    q.push(1);
    q.push(2);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<"size : "<<q.size()<<endl;
    while(!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }
}

//...03...sorted using comparetor(lower to upper)
int main()
{
    priority_queue<int,vector<int>,greater<int>>q;
    q.push(1);
    q.push(2);
    q.push(2);
    q.push(3);
    q.push(4);

    while(!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }
}

//...04...sorted pair of queue(lower to upper)
int main()
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
    q.push({1,2});
    q.push({2,3});
    q.push({3,4});
    q.push({4,4});
    q.push({3,4});

    while(!q.empty())
    {
        cout<<q.top().first<<" "<<q.top().second<<endl;
        q.pop();
    }
}

//...05...sorted pair of queue(lower to upper)
int main()
{
    priority_queue<pair<int,int>>q;
    q.push({1,2});
    q.push({2,3});
    q.push({3,4});
    q.push({4,4});
    q.push({3,4});

    while(!q.empty())
    {
        cout<<q.top().first<<" "<<q.top().second<<endl;
        q.pop();
    }
}
*/
//...06...Rank List(solve and penalty)
int main()
{
    priority_queue<pair<int,int>>q;
    q.push({1,-2});
    q.push({2,-3});
    q.push({2,-4});
    q.push({4,-4});
    q.push({3,-4});

    while(!q.empty())
    {
        cout<<q.top().first<<" "<<q.top().second*-1<<endl;
        q.pop();
    }
}



