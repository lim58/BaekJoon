#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	map<long long, int> card;

	for(int i=0; i<N; i++) {
		long long x;
		cin >> x;
		card[x]++;
	}

	int cardNum = 0;
	long long result = LLONG_MAX;

	for(auto c: card) {
		if(c.second > cardNum) {
			cardNum = c.second;
			result = c.first;
		} else if(c.second == cardNum && c.first < result) {
			result = c.first;
		}
	}

	cout << result;

  return 0;
}
