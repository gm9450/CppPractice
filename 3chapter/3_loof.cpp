#include "std_lib_facilities.h"

int main()
{
	for (char i = 'a'; i <= 'z' ; i++)
	{
		cout << i << " : " << int(i) << '\n';
	}
	cout << '\n';
	for (char i = 'A'; i <= 'Z'; i++)
	{
		cout << i << " : " << int(i) << '\n';
	}
	cout << '\n';
	for (char i = 0; i <= 9; i++)
	{
		cout << i << " : " << int(i) << '\n';
	}
}