#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	while(b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int main() {
	string str;
	cin >> str;

	istringstream s (str);
	string temp;
	vector<string> v;
	
	while(getline(s, temp, ':')) {
		v.push_back(temp);
	}

	int n1 = stoi(v[0]);
	int n2 = stoi(v[1]);

	int g = gcd(n1, n2);
	cout << n1 / g << ':' << n2 / g;
  return 0;
}
