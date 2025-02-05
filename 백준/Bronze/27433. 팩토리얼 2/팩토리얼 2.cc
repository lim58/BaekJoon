#include <bits/stdc++.h>
using namespace std;

long long func(int n) {
	if(n == 0) return 1;
	else return n * func(n-1);
}

int main() {
	int N;
	cin >> N;
	cout << func(N);

	return 0;
}