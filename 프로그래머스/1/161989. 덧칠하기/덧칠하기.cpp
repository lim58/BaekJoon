#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int painted = 0;
    int index = 0;
        
    while(index < section.size()) {
        if(painted < section[index]) {
            painted = section[index];
            painted += m - 1;
            answer++;
        } else {
            index++;
        }
    }
    
    return answer;
}