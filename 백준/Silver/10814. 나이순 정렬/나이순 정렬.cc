#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	map<int, list<string>> member;

	for(int i=0; i<N; i++) {
		int age;
		string name;
		cin >> age >> name;
		member[age].push_back(name);
	}

	for(const auto& age: member) {
		int memberAge = age.first;
		for(const auto& name: age.second) {
			cout << memberAge << ' ' << name << '\n';
		}
	}

  return 0;
}
