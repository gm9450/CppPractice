#include "std_lib_facilities.h"

int main()
{
	vector<double> numbers(0);
	double num = 0;
	char unit = 0;
	cout << "숫자하고 단위를 적어주세요!(m, c, i, f)\n";
	while (cin >> num >> unit)
	{
		if (unit == 'm')
			numbers.push_back(num);
		else if (unit == 'c')
			numbers.push_back(num*0.01);
		else if (unit == 'i')
			numbers.push_back(num*0.02);
		else if (unit == 'f')
			numbers.push_back(num*3.28);
		else
			cout << unit << "이 무슨 단위인지 모르겠어요!, 값으로 추가하지 않을게요!\n";
		sort(numbers);
		if (numbers.size() > 1)
		{
			double num1 = numbers[0];
			double num2 = numbers[numbers.size() - 1];
			if (num1 > num2)
			{
				cout << "지금까지 가장 작은값 : " << num2 << "m" << '\n';
				cout << "지금까지 가장 큰값 : " << num1 << "m" << '\n';
			}
			else if (num2 > num1)
			{
				cout << "지금까지 가장 작은값 : " << num1 << "m" << '\n';
				cout << "지금까지 가장 큰값 : " << num2 << "m" << '\n';
			}
			else if (num1 == num2)
				cout << "두 수가 같다\n";
			if (abs(num1 - num2) < 1.0 / 100)
				cout << "두수가 거의 차이 나지 않음\n";
		}
		cout << "총 개수 : " << numbers.size() << "개\n";
		double sum = 0;
		for (double x : numbers){
			sum += x;
		}
		cout << "총합 : " << sum << "m\n";
	}
}

