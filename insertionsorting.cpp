#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;

int main()
{
    int a[7]={6,1,3,4,5,11,66};
    for (int j = 2;j!=7;j++)
    {
        int key = a[j],i = j-1;
        while(i>=0&&a[i]>key){
            a[i + 1] = a[i];
            a[i] = key;
            i--;
        }

    }
    for (auto b: a)
    {
        cout << b;
    }
}
