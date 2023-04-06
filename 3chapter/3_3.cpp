#include "std_lib_facilities.h"

int main()
{
	vector<double> As(0);
	for (double A = 0; cin >> A;)
		As.push_back(A);
	sort(As);
	double sum = 0;
	for (double x : As)
		sum += x;
	cout << sum << '\n';
	cout << As[As.size() - 1] << '\n';
	cout << As[0] << '\n';

}