#include "std_lib_facilities.h"

int area (int a, int b)
{
    if (a <= 0 || b <= 0) error("양수가 아닌인자");
    return a * b;
}

int main()
{
    int x = 4;
    int y = 3;
    int area1 = area(x, y);
    cout << area1 << '\n';
}