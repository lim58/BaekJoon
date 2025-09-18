#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int i=0; i<commands.size(); i++) {
        vector<int> sub(array.begin() + commands[i][0] - 1, array.begin() + commands[i][1]);
        sort(sub.begin(), sub.end());
        answer.push_back(sub[commands[i][2] - 1]);
    }
    
    return answer;
}