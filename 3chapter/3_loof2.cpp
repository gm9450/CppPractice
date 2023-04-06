#include "std_lib_facilities.h"

void for_loop(char a, char b)
{
	for (char i = a; i <= b; i++)
	{
		cout << i << " : " << int(i) << '\n';
	}
}

int main()
{
	for_loop('a', 'z');
	cout << '\n';
	for_loop('A', 'Z');
	cout << '\n';
	for_loop(0, 9);
}