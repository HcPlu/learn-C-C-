#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    auto b = v.begin(), e = v.end();
    string s("some string");
    // if(s.begin() != s.end()){
    //     auto it = s.begin();
    //     *it = toupper(*it);
    // }
    for (auto it = s.begin(); it != s.end() && !isspace(*it);++it){
        *it = toupper(*it);
    }
        cout << s << endl;
        int a1[10],a2[10];
        int (&arr)[10] = a1;

        int aaa[] = {1, 2, 3, 4};
        auto ia2(aaa);
        *ia2 = 22;
        cout << *ia2;
}
