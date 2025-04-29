#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, hap = 0;

	cin >> N;

	vector<int> firstList(N);
	vector<int> secondList(N);

	for(int i=0; i<N; i++) {
		cin >> firstList[i];
	}

	for(int i=0; i<N; i++) {
		cin >> secondList[i];
	}

	sort(firstList.begin(), firstList.end());
	sort(secondList.begin(), secondList.end(), greater<>());

	for(int i=0; i<N; i++) {
		int num = firstList[i] * secondList[i];
		hap += num;
	}

	cout << hap;

	return 0;
}