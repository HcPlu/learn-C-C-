#include <iostream>
#include <cstring>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    string s,str;
    cin >> s;
    str = s;
    int length = s.length();
   // char str[length] = s;

   for (size_t i = 0; i < length/2; i++)
   {
       char temp = s[i];
       s[i] = s[length - i - 1];
       s[length - i - 1] = temp;
   }
    cout <<str << s << endl;

    return 0;
}