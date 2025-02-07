#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	vector<int> v(N);
	for(int i=0; i<N; i++) {
		cin >> v[i];
	}

	int result = 0;
	for(int i=0; i<N-2; i++) {
		for(int j=i+1; j<N-1; j++) {
			for(int k=j+1; k<N; k++) {
				int a = v[i]+v[j]+v[k];
				if(a <= M && result < a) {
					result = a;
				}
			}
		}
	}

	cout << result;

	return 0;
}