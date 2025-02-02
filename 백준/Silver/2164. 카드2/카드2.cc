#include <bits/stdc++.h>
using namespace std;

int main() {
	queue<int> q;
	int N;
	cin >> N;

	for(int i=1; i<=N; i++) {
		q.push(i);
	}

	for(int i=0; q.size() > 1; i++) {
		if(i % 2 == 0) {
			q.pop();
		} else {
			int val = q.front();
			q.pop();
			q.push(val);
		}
	}

	cout << q.front();

  return 0;
}
