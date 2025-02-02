#include <bits/stdc++.h>
using namespace std;

int main() {
	queue<int> q;
	int N, K;
	cin >> N >> K;

	for(int i=1; i<=N; i++) {
		q.push(i);
	}

	cout << '<';
	for(int i=0; i<N-1; i++) {
		int n = K - 1;
		while(n--) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << ',' << ' ';
		q.pop();
	}

	cout << q.front() << '>';

  return 0;
}
