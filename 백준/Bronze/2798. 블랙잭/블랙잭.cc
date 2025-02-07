#include <bits/stdc++.h>
using namespace std;

int select(int over, vector<int>& arr) {
	int maxVal = 0;
	for(int i=0; i<arr.size()-1; i++) {
		for(int j=i+1; j<arr.size(); j++) {
			int plus = arr[i] + arr[j];
			if(maxVal < plus && over >= plus) {
				maxVal = plus;
			}
		}
	}
	return maxVal;
}

int main() {
	int N, M;
	cin >> N >> M;

	vector<int> v(N);
	for(int i=0; i<N; i++) {
		cin >> v[i];
	}

	int result = 0;
	for(int i=0; i<N; i++) {
		vector<int> copy = v;
		copy.erase(copy.begin() + i);
		
		int sum = v[i];
		sum += select(M-v[i], copy);

		result = max(result, sum);
	}

	cout << result;

	return 0;
}