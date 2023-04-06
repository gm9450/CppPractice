#include "std_lib_facilities.h"

int main() {
    double d = 0;
    while (cin >> d) //ctrl + z를 입력하면 입력이 종료된다.
    {
        int i = d;
        char c = i;
        int i2 = i;
        cout << "d==" << d
        << "\ni==" << i
        << "\ni2==" << i2
        << "\nchar(" << c <<")\n";
    }
}
