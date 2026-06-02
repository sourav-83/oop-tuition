// #include<iostream>

// using namespace std;

// #define PRITHY 100
// #define Acceleartion_gravity 9.8

// inline int even(int x)
// {
//     return !(x % 2);
// }
// int main()
// {

//   int x = 100;
//   //cout<<!(x % 2);
//   cout<<even(x);

// }

#include <iostream>

inline void increment(int &n) { n = n + 1; }

int main() {
int n = 0;
increment(n);
std::cout << "Result " << n;
}