#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	int title = 666;
	int count = 0;
	while(1) {
		if(to_string(title).find("666") != string::npos) {
			count++;
			if(count == N) {
				cout << title << endl;
				break;
			}
		}
		title++;
	}

	return 0;
}