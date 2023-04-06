#include "std_lib_facilities.h"

int main()
{
	double money_amount{ 0 };
	double usd_per_jyp = { 0.0073};
	double usd_per_eur{ 1.06 };
	double usd_per_gbp{ 1.18 };
	char unit = 0;

	cout << "달러로 환원 해드릴게요\n";
	cout << "돈을 입력해주세요(엔 : y, 유로 : u, 파운드 : p)(ex : 100y) : ";
	cin >> money_amount >> unit;
	
	if (unit == 'y')
		cout << money_amount << "엔은 " << money_amount * usd_per_jyp << "달러입니다!";
	else if (unit == 'u')
		cout << money_amount << "유로는 " << money_amount * usd_per_eur << "달러입니다!";
	else if (unit == 'p')
		cout << money_amount << "파운드는 " << money_amount * usd_per_gbp << "달러입니다!";
	else
		cout << unit << "이 무슨 단위인지 모르겠어요!";
}