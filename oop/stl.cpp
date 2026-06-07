#include<bits/stdc++.h>

using namespace std;

int main()
{
    list<int> a;
    a.push_back(10);
    a.push_back(15);
    a.push_back(-1);
    //for (int i:a) cout<<i<<endl;
    //cout<<a[2];

    deque<int>d;
    d.push_back(10);
    d.push_front(5);

    vector<int>v;
    v.push_back(10);
    v.push_back(3);
    v.push_back(4);
    //cout<<v.size();
    //cout<<v[1];

    // for(int i=0; i<v.size(); i++)
    // {
    //     cout<<v[i]<<endl;
    // }
    sort(v.begin(), v.end());
    // for (int i:v) cout<<i<<endl;


    // priority_queue is not a queue rather it's a stack

    priority_queue<int> pq;
    pq.push(-10);
    pq.push(-15);
    pq.push(-7);
    cout<<-pq.top()<<endl;
    pq.pop();
    cout<<-pq.top();
   
    


}


