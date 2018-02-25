#include <iostream>
#include <cstring>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int n, a, b, c,d,e,f,g=2,k=2;
    cin >> n >> a >> b;
    if(a%2==0){
        d = a / 2;
    }else{d = (a + 1) / 2;}
     if (b%2==0){
         e = b / 2;
     }else{
         e = (b + 1) / 2;
     }
     c = n / 4;
     f = n/2;
     if(e<=c&&d>c){
         cout << "Final!" << endl;
     }else if(e>c&&d<=c){
         cout << "Final!" << endl;
     }else{
       while(d!=e){
           if(a%2==0){
        d = a / 2;
    }else{d = (a + 1) / 2;}
     if (b%2==0){
         e = b / 2;
     }else{
         e = (b + 1) / 2;
     }
     k++;
       }
        cout << k << endl;
     }
}