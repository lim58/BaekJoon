#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
  if(a.length() == b.length()) return a < b;
  return a.length() < b.length();
}

int main() {
  int N;
  cin >> N;
  cin.ignore();

  vector<string> str(N);
  for(int i=0; i<N; i++) {
    getline(cin, str[i]);
  }

  sort(str.begin(), str.end(), compare);
  str.erase(unique(str.begin(), str.end()), str.end());

  for(auto s: str) {
    cout << s << '\n';
  }

	return 0;
}