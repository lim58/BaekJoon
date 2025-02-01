#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	stack<char> s;
	int result = 0;

	cin >> str;

	for(int i=0; i<str.length(); i++) {
		if(str[i] == '(') {
			s.push('(');
		} else if (str[i] == ')') {
			s.pop();
			if(str[i-1] == '(') {
				result += s.size();
			} else {
				result++;
			}
		}
	}
	cout << result;
	
	return 0;
}