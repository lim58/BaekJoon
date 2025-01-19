#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int N, T, P;
  cin >> N;

  int shirts[6], shirtsCount = 0;
  for (int i = 0; i < 6; i++) {
    cin >> shirts[i];
  }

  cin >> T >> P;

  for (int i = 0; i < 6; i++) {
    shirtsCount += (shirts[i] + T - 1) / T;
  }

  cout << shirtsCount << '\n';
  cout << N / P << ' ' << N % P << '\n';

  return 0;
}
