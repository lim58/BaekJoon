#include <string>
#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int minVal = *min_element(arr.begin(), arr.end());
    
    for(int i=0; i<arr.size(); i++) {
        if(minVal != arr[i]) {
            answer.push_back(arr[i]);
        }
    }
    
    if(answer.empty()) {
        answer.push_back(-1);
    }
    
    return answer;
}