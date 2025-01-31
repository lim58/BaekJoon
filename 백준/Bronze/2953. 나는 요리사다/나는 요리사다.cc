#include <bits/stdc++.h>
using namespace std;

int main() {
	int winner, score = 0;

	for(int i=1; i<=5; i++) {
		int hap = 0;
		for(int j=0; j<4; j++) {
			int num;
			cin >> num;
			hap += num;
		}
		if(score < hap) {
			score = hap;
			winner = i;
		}
	}

	cout << winner << ' ' << score;
	return 0;
}