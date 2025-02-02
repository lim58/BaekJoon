#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	map<string, int> company;

	while(N--) {
		string name, record;
		cin >> name >> record;

		if(record == "enter") {
			company[name] = 1;
		} else if(record == "leave") {
			company[name] = 0;
		}
	}

	vector<string> person;

	for(auto c: company) {
		if(c.second == 1) {
			person.push_back(c.first);
		}
	}

	sort(person.rbegin(), person.rend());
	
	for(const auto& name: person) {
		cout << name << '\n';
	}

  return 0;
}
