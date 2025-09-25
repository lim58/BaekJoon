#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0; 
    int painted = 0;
    
    for(int pos: section) {
        if(painted < pos) {
            painted = pos + m - 1;
            answer++;
        }
    }
    
    return answer;
}