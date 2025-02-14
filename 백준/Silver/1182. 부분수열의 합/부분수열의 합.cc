#include <bits/stdc++.h>
using namespace std;

int N, S, total = 0;
vector<int> numbers;

void find(int index, int sum) {
	if(index == N) {
		if(sum == S) total++;
		return;
	}
	find(index + 1, sum + numbers[index]);
	find(index + 1, sum);
}


int main() {
	cin >> N >> S;
	numbers.resize(N);

	for(int i=0; i<N; i++) {
		cin >> numbers[i];
	}

	find(0, 0);

	if(S == 0) total--;
	cout << total << '\n';

  return 0;
}
