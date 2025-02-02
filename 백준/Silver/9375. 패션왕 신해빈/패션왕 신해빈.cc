#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	while(N--) {
		int n;
		cin >> n;

		map<string, int> clothes;

		for(int i=0; i<n; i++) {
			string name, type;
			cin >> name >> type;
			clothes[type]++;
		}
		
		int result = 1;
		for(auto c: clothes) {
			result *= (c.second + 1);
		}

		cout << result -1 << endl;
	}

  return 0;
}
