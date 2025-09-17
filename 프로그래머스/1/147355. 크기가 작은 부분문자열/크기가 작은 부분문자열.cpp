#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    int numberOfDigit = p.size();
    
    for(int i=0; i<=t.size()-numberOfDigit; i++) {
        string sliceNum = t.substr(i, numberOfDigit);
        if(sliceNum <= p) {
            answer++;
        }
    }
    
    return answer;
}