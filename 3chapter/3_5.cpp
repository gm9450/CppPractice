#include "std_lib_facilities.h"

int main()
{
    double a {0};
    double b {0};
    char unit = 0;
    cin >> a >> b >> unit;
	
	if (unit == '+')
		cout << a << "+" << b << "=" << a + b << '\n';
	else if (unit == '-')
		cout << a << "-" << b << "=" << a - b << '\n';
	else if (unit == '*')
		cout << a << "*" << b << "=" << a * b << '\n';
	else if (unit == '/')
		cout << a << "/" << b << "=" << a / b << '\n';
    else
        cout << "i don't know that.\n";
}