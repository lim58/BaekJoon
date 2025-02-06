#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	getline(cin, str);

	stringstream ss(str);
	string word;
	int count = 0;

	while(ss >> word) {
		count++;
	}
	cout << count;
	return 0;
}