#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  queue<int> q;
  int N;
  cin >> N;

  while (N--) {
    string str;
    cin >> str;

    if (str == "push") {
      int n;
      cin >> n;
      q.push(n);
    } 
    else if (str == "pop") {
      if (!q.empty()) {
        cout << q.front() << '\n';
        q.pop();
      } else {
        cout << -1 << '\n';
      }
    } 
    else if (str == "size") {
      cout << q.size() << '\n';
    } 
    else if (str == "empty") {
      cout << q.empty() << '\n';
    } 
    else if (str == "front") {
      if (!q.empty()) {
        cout << q.front() << '\n';
      } else {
        cout << -1 << '\n';
      }
    } 
    else if (str == "back") {
      if (!q.empty()) {
        cout << q.back() << '\n';
      } else {
        cout << -1 << '\n';
      }
    }
  }

    return 0;
}
