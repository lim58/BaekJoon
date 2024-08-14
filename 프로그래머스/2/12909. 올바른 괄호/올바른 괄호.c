#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    char stack[100000];
    bool answer = true;
    int last = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        switch (s[i]) {
            case '(':
                stack[last] = '(';
                last++;
                break;
            case ')':
                if (last > 0 && stack[last - 1] == '(') {
                    stack[last-1] = "\0";
                    last--;
                } else {
                    return answer = false;
                }
                break;
        }
    }
    
    if(stack[0] == '(' || stack[0] == ')') {
        return answer = false;
    }

    return answer;
}