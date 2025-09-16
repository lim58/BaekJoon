#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    
    while(n > 0) {
        int addNum = n % 10;
        answer += addNum;
        n /= 10;
    }

    return answer;
}