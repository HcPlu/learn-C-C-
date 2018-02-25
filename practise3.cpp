#include <iostream>
using namespace std;
int main()
{
    //int i = 42;
    //const int &r1 = i;
   // const int &r2 = 42;
    //const int &r3 = r1 * 2;
    //const double pi = 3.14;
    //const double *ptr = &pi;
   // const double *cptr = &pi;
   //  *cptr = 42;
    // const int v2 = 0;
    // int v1 = v2;
    // int *p = &v1;
    // int &r1 = v1;
    // r1 = v2;
    // typedef int iiiiii;
    // iiiiii a = 9;
    // cout << a;#include<iostream.h>
    string s="some string";
    for (auto it = s.begin();it !=s.end() &&isspace(*it); ++it){
         *it = toupper(*it);
    cout << *it;}
    cout << s;
}