#include <bits/stdc++.h>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    
    map<char, int> numbers;
    
    for(char c: X) {
        numbers[c]++;
    }
    
    for(char c: Y) {
        if(numbers[c] > 0) {
            answer.push_back(c);
            numbers[c]--;
        }
    }
    
    if(answer.empty()) return "-1";
    
    sort(answer.begin(), answer.end(), greater<char>());
    
    if(answer[0] == '0') return "0";
    
    return answer;
}