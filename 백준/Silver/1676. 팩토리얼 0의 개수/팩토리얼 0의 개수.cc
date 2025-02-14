#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int total = 0;
    
    for (int i = 5; i <= N; i *= 5) {
        total += N / i;
    }

    cout << total;

    return 0;
}
