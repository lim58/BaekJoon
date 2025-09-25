#include <bits/stdc++.h>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    unordered_set<char> skipChars(skip.begin(), skip.end());
    
    for(char c: s) {
        int move = index;
        int ch = c;
        
        while(move > 0) {
            ch++;
            if(ch > 'z') ch = 'a';
            if(skipChars.find(ch) == skipChars.end()) move--;
        }
        answer.push_back(ch);
    }
    
    return answer;
}