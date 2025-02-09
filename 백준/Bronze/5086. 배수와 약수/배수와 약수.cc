#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b) {
  for(int i=1; i<b/2+1; i++) {
    if(a * i == b) return true;
  }
  cout << "neither" << '\n';
  return false;
}

int main() {
	  while(1) {
    int A, B;
    cin >> A >> B;
    
    if(A == 0 && B == 0) break;

    if(A <= B) {
      if(compare(A, B)) {
        cout << "factor" << "\n";
      }
    } else {
      if(compare(B, A)) {
        cout << "multiple" << "\n";
      }
    }
  }

	return 0;
}