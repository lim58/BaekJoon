#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    stack<int> stack;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '(') {
            stack.push('(');
        } else if(s[i] == ')' && !stack.empty()) {
            stack.pop();
        } else {
            answer = false;
            break;
        }
    }
    
    if(!stack.empty()) {
        answer = false;
    }

    return answer;
}