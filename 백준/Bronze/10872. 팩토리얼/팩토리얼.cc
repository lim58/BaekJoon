#include <bits/stdc++.h>
using namespace std;

int result = 1;

int func(int n) {
	if(n == 0) return result;
	else return n * func(n-1);
}

int main() {
	int N;
	cin >> N;
	cout << func(N);

	return 0;
}