#include "std_lib_facilities.h"

vector<int> prime;
bool is_prime(int n)
{
	for (int p = 0; p < prime.size(); ++p)
		if (n % prime[p] == 0) return false;
	return true;
}

int main()
{
	int a = 0;
	cout << "어디까지 구할까요? : ";
	cin >> a;
	prime.push_back(2);
	for (int i = 3; i <= a; ++i) {
		if (is_prime(i)) prime.push_back(i);
	}
	cout << "Primes: \n";
	for (int x : prime) {
		cout << x << '\n';
	}
}

