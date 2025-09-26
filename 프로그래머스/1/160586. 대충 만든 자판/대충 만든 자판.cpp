#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    map<char, int> keyPress;
    
    for(int i=0; i<keymap.size(); i++) {
        for(int j=0; j<keymap[i].size(); j++) {
            int word = keymap[i][j];
            
            if(keyPress.find(word) == keyPress.end()) {
                keyPress[word] = j + 1;
            } else if(keyPress[word] > j + 1) {
                keyPress[word] = j + 1;
            }
        } 
    }
    
    for(string target: targets) {
        int sum = 0;
        bool vaild = true;
        
        for(char c: target) {
            if(keyPress.find(c) == keyPress.end()) {
                vaild = false;
                break;
            }
            sum += keyPress[c];
        }
        answer.push_back(vaild ? sum : -1);
    }
    
    return answer;
}