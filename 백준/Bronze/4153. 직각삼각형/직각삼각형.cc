#include <bits/stdc++.h>
using namespace std;

int main() {
  while(1) {
    int a, b, c;
    cin >> a >> b >> c;

    if(a==0 && b==0 && c==0) {
      break;
    }

    int maximum = max(max(a, b), c);
    int minimum = min(min(a, b), c);
    int middle = a + b + c - maximum - minimum;

    if(pow(minimum, 2) + pow(middle, 2) == pow(maximum, 2)) {
      cout << "right" << "\n";
    } else {
      cout << "wrong" << "\n";
    }
  }
	return 0;
}