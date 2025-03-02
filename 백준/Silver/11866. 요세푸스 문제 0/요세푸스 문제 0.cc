#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	queue<int> q;

	for(int i=1; i<=N; i++) {
		q.push(i);
	}

	cout << '<';
	int count = 0;
	while(!q.empty()) {
		for(int i=1; i<K; i++) {
			int value = q.front();
			q.pop();
			q.push(value);
		}

		int value = q.front();
		q.pop();
		cout << value;
		count++;
		if(count < N) {
			cout << ',' << ' ';
		}
	}
	cout << '>';

  return 0;
}
