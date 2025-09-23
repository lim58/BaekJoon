#include <bits/stdc++.h>
using namespace std;

int binaryOneCount(int num) {
    int oneCount = 0;
    while (num > 0) {
        if (num % 2 == 1) oneCount++;
        num /= 2;
    }
    return oneCount;
}

int solution(int n) {
    int nOneCount = binaryOneCount(n);
    
    for (int i = n + 1; ; i++) {
        if (binaryOneCount(i) == nOneCount) {
            return i;
        }
    }
    return -1;
}
