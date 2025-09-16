#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    
    int watermelon = n / 2;
    int su = n % 2;
    for(int i=0; i<watermelon; i++) {
        answer += "수박";
    }
    
    return su > 0 ? answer + "수" : answer;
}