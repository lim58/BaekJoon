#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    
    vector<int> arr;
    
    while(n) {
        arr.push_back(n % 10);
        n /= 10;
    }
    
    sort(arr.begin(), arr.end(), greater<int>());
    
    long long answer = 0;
    
    for(int num: arr) {
        answer = answer * 10 + num;
    }
    
    return answer;
}