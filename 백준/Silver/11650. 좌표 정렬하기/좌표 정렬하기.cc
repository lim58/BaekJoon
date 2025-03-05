#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	map<int, list<int>> point;
	for(int i=0; i<N; i++) {
		int x, y;
		cin >> x >> y;
		point[x].push_back(y);
	}

	for(auto& p: point) {
		p.second.sort();
	}

	for(const auto& p: point) {
		int x = p.first;
		for(const auto& y: p.second) {
			cout << x << ' ' << y << '\n';
		}
	}

  return 0;
}
