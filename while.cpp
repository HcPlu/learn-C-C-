#include <iostream>
using namespace std;

int main(){
    /*{
    int sum = 0, val = 1;
    while(val <= 10){
        sum += val;
        ++val;
    }
    int sum2 = 0,length = 10;
    int val2 = 2;
    for (size_t i = 0; i < length; i++)
    {
        sum2 += val2;
        ++val2;
    }
    cout << "Sum of 1 to 10 inclusive is " << sum <<"ss"<<sum2<< endl;
    cout << "sum2" << sum2 << endl;

    return 0;
}

{
    int sum = 0, value = 0;
    while(std::cin>>value)
        sum += value;
    std::cout << "Sum is: " << sum << std ::endl;
    return 0;
}

    int currVal = 0,val = 0;
       if (cin >> currVal){
           int cnt = 1;
           while (cin >> val){
               if (val == currVal)
                   ++cnt;
                else
                {
                    cout << currVal << " occurs "
                          << cnt << " times " << endl;
                    currVal = val;
                    cnt = 1;
                }
           }

           cout << currVal << "occurs"
                << cnt << "times" << endl;
       }

    }

    unsigned u = 10,j = 9,k = -1,p = -2;
    int i = -42,l = 1;
    cout << i + u << endl;
    cout << u - j << endl;
    cout << j - u <<" "<< k << endl;
    cout << k - l << endl;
    cout << p << endl;

    string book("try try try");
    cout << book << endl;
    int i = {3};
    int i;
    i = 10;
    cout << i << endl;
    i = 100;
    cout << i << endl;
   i = 100;*/
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
    for (size_t i = 0; i < 8; i++)
    {
        a++;
        b--;
    }
    cout << a << b << endl;
}