#include "std_lib_facilities.h"

int main()
{
	int sum = 0;
	int a = 1;
	for (int i = 1; i < 65; ++i)
	{
		sum += a;
		cout << sum << '\n';
        cout << i << "번째" << '\n';
		a = a * 2 * i;
	}
	cout << sum << '\n';
}