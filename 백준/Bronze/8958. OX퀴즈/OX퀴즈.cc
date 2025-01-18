#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  while(N--) {
    int result=0, count=0;
    string str;
    cin >> str;

    for(char c : str) {
      if(c == 'O') {
        count++;
        result += count;
      } else {
        count = 0;
      }
    }
    cout << result << '\n';
  }

	return 0;
}