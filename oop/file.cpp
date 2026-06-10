#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // ofstream outFile("file.txt");

    // if(!outFile.is_open()) cerr<<"can't open file";

    // outFile<<"hello from code\nnext line";

    // outFile.close();
    




    // ifstream inFile("file2.txt");

    // if(!inFile.is_open()) 
    // {cerr<<"can't open file"; return -1;}

    // string line;
    // vector<int>v;
    // while(getline(inFile, line))
    // {
    //     cout<<line<<endl;
    //     v.push_back(stoi(line));
    // }
    
    // cout<<"size: " <<v.size();
    // inFile.close();




    ofstream outFile("file.txt", ios::app);

    if(!outFile.is_open()) cerr<<"can't open file";

    outFile<<"append test";

    outFile.close();


  

}