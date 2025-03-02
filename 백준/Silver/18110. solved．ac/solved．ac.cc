#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	if(N == 0) {
		cout << 0;
		return 0;
	}

	vector<int> userResponse(N);
	for(int i=0; i<N; i++) {
		cin >> userResponse[i];
	}

	int aver = round(N * 0.15);

	sort(userResponse.begin(), userResponse.end());

	userResponse.erase(userResponse.begin(), userResponse.begin() + aver);
	userResponse.erase(userResponse.end() - aver, userResponse.end());

	float sum = 0;
	int count = 0;
	for(int i=0; i<N-(aver*2); i++) {
		sum += userResponse[i];
		count++;
	}

	cout << round(sum / count);

  return 0;
}
