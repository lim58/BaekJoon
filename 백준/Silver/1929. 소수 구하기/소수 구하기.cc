#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	vector<int> v(M + 1);
	for(int i=1; i<=M; i++) {
		v[i] = i;
	}

	v[1] = 0;
	for(int i=2; i<=M/2+1; i++) {
		if(v[i] == 0) continue;
		for(int j=i*2; j<=M; j+=i) {
			v[j] = 0;
		}
	}

	for(int i=N; i<=M; i++) {
		if(v[i] != 0) {
			cout << v[i] << '\n';
		}
	}
	
  return 0;
}
