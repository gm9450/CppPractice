#include "std_lib_facilities.h"

int main()
{
	int a, b, c;
	cout << "정수 3개를 입력하시오 :";
	cin >> a >> b >> c;

	if (a > b)
	{
		if (b > c)
			cout << a << '\n' << b << '\n' << c;
		if (c > a)
			cout << c << '\n' << a << '\n' << b;
	}
	if (b > a)
	{
		if (a > c)
			cout << b << '\n' << a << '\n' << c;
		if (c > a)
			cout << b << '\n' << c << '\n' << a;
	}
}