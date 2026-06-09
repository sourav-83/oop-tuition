#include<bits/stdc++.h>

using namespace std;

int main()
{
    // set<int> s;
    // s.insert(10);
    // s.insert(20);
    // s.insert(15);
    
    // //s.erase(15);
    // //for(int x: s) cout<<x<<" ";


    // //if(s.find(15)==s.end()) cout<<"15 not present";
    // //else cout<<"present";


    // // if(s.count(15)) cout<<"15 present";
    // // else cout<<"not present";

    // cout<<s.size();
    

     





    // multiset<int> ms;
    // ms.insert(10);
    // ms.insert(15);
    // ms.insert(5);
    // ms.insert(10);
    //ms.erase(10);
    //ms.erase(ms.find(10));
    //for(int x: ms) cout<<x<<" ";
    //cout<<ms.size();
    //cout<<ms.count(10);
    
    
    // vector<int> v = {1,2,1,3,1,5,2,1,7,6,9,6};
    // for (auto x:v) cout<<x<<" ";



    //{key,value}
    // map<int,string>m;
    // m.insert({83,"Sourav"});
    // m.insert({38,"Prithy"});
    // m.insert({70,"outsider"});
    // //m[38] = "prithy student";
    // //cout<<m[38];
    // for(auto p: m) cout<<"roll: "<<p.first<<" name: "<<p.second<<endl;

    


    // vector<int> v = {1,2,1,3,1,5,2,1,7,6,9,6};
    // map<int,int>m;
    // for (int x:v) m[x] = m[x]+1;
    // m.erase(6);
    // cout<<m[6];
    


    // unordered_set<int>s;
    // s.insert(10);
    // s.insert(20);
    // s.insert(15);
    // s.insert(10);
    
    // // //s.erase(15);
    // for(int x: s) cout<<x<<" ";



    // pair<int,string>p = make_pair(83,"name");
    // //p.first = 83;
    // //p.second = "Sourav";


    // vector<pair<int,int>>v;
    // v.push_back({83, 1});
    // v.push_back({38,2});


    // unordered_map<int,string>m;
    // m.insert({83,"Sourav"});
    // m.insert({38,"Prithy"});
    // m.insert({70,"outsider"});
    // //m[38] = "prithy student";
    // //cout<<m[38];
    // for(auto p: m) cout<<"roll: "<<p.first<<" name: "<<p.second<<endl;



    //tuple<int, string, double>student (83, "Sourav", 1.11);
    tuple<int, string, double>student;
    student = make_tuple(38, "prithy", 1.21);

    cout<<get<0>(student)<<endl;
    get<0>(student) = 38;
    cout<<get<0>(student)<<endl;





    


}