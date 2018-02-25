#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector<int> v1;
    // vector<int> v2 = v1;
    // vector<int> someInt;
    // for (size_t i = 0; i!= 100; i++)
    // {
    //     someInt.push_back(i);
    // }
    // for (auto &p: someInt){
    //     p *= p;
    //     cout << p;
    // }
    vector<int> grades(11, 0);
    unsigned grade;
    while (cin >> grade)
    {
        if(grade<=100)
            ++grades[grade / 10];
    }
    for (auto p: grades)
        cout << p << " ";
}
