#include <bits/stdc++.h>

using namespace std;

string solution(string new_id) {
    
    //1단계
    for(int i=0; i<new_id.size(); i++) {
        if(isupper(new_id[i])) {
            new_id[i] = tolower(new_id[i]);
        }
    }
    
    //2단계
    string temp = "";
    for(char c: new_id) {
        if(islower(c) || isdigit(c) || c == '-' || c == '_' || c == '.') {
            temp.push_back(c);
        }
    }
    new_id = temp;
    
    //3단계
    temp = "";
    bool dot = false;
    for(char c: new_id) {
        if(c == '.') {
            if(!dot) {
                temp.push_back(c);
                dot = true;  
            }  
        } else {
            temp.push_back(c);
            dot = false; 
        }
    }
    new_id = temp;
    
    //4단계
    int size = new_id.size();
    if(new_id[0] == '.') {
        new_id.erase(0, 1);
    }
    
    if(new_id[size - 1] == '.') {
        new_id.erase(size - 1, 1);
    }
    
    //5단계
    if(new_id == "") {
        new_id = "a";
    }
    
    //6단계
    if(new_id.size() >= 16) {
        string str(new_id.begin(), new_id.begin() + 15);
        new_id = str;
    }
    
    size = new_id.size();
    if(new_id[0] == '.') {
        new_id.erase(0, 1);
    }
    
    if(new_id[size - 1] == '.') {
        new_id.erase(size - 1, 1);
    }
    
    //7단계
    size = new_id.size();
    char last = new_id[size - 1];
    if(size <= 2) {
        while(new_id.size() < 3) {
            new_id.push_back(last);
        }
    }
    
    return new_id;
}