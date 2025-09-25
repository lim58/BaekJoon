#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    int answer = 0;
    int oCount = 0;
    int xCount = 0;
    
    char firstWord = ' ';
    for(int i=0; i<s.size(); i++) {
        if(firstWord == ' ') {
            firstWord = s[i];
            oCount++;
            continue;
        }
        
        if(firstWord == s[i]) {
            oCount++;
        } else {
            xCount++;
        }
        
        if(oCount == xCount) {
            answer++;
            oCount = 0;
            xCount = 0;
            firstWord = ' ';
        }
    }
    
    if(firstWord != ' ') answer++;
    
    return answer;
}