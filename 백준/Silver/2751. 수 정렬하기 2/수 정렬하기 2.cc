#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> v(N);
	for(int i=0; i<N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	for(int i=0; i<N; i++) {
		cout << v[i] << '\n';
	}

	return 0;
}