#include "std_lib_facilities.h"

int main ()
{
    vector<string> num = {"one", "two","three","four","five"};
    int number = 0;
    while(cin >> number)
        cout << num[number-1];
}