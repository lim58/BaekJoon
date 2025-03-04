#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<pair<int, int>> v(N);
	for(int i=0; i<N; i++) {
		int weight, height;
		cin >> weight >> height;
		v[i] = { weight, height };
	}

	vector<int> result(N, 1);
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			if(i != j && v[i].first < v[j].first && v[i].second < v[j].second) {
				result[i]++;
			}
		}
	}

	for(int i=0; i<N; i++) {
		cout << result[i];
		if(i < N-1) {
			cout << ' ';
		}
	}

  return 0;
}
