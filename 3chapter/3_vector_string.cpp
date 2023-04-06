#include "std_lib_facilities.h"

int main()
{
	vector<string> words(0);
	string disliked_1 = "욕";
	string disliked_2 = "딸기";
	string disliked_3 = "아이스";
	string disliked_4 = "민감한";

	for (string word; cin >> word;)
		words.push_back(word);
	for (string x : words) {
		if (x == disliked_1
			|| x == disliked_2
			|| x == disliked_3
			|| x == disliked_4) {
			x = "BLEEP";
		}
		cout << x;
	}
}