#include <bits/stdc++.h>

using namespace std;

int i;

bool compare(string a, string b) {
    if(a[i] == b[i]) return a < b;
    return a[i] < b[i];
}

vector<string> solution(vector<string> strings, int n) {
    i = n;
    sort(strings.begin(), strings.end(), compare);

    return strings;
}