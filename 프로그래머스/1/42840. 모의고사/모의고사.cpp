#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> one = {1, 2, 3, 4, 5};
    vector<int> two = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> three = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    int oneCount = 0;
    int twoCount = 0;
    int threeCount = 0;
    
    for(int i=0; i<answers.size(); i++) {
        int ans = answers[i];
    
        if(ans == one[i % one.size()]) oneCount++;
        if(ans == two[i % two.size()]) twoCount++;
        if(ans == three[i % three.size()]) threeCount++;
    }
    
    int maximum = max(oneCount, max(twoCount, threeCount));
    
    if(oneCount == maximum) answer.push_back(1);
    if(twoCount == maximum) answer.push_back(2);
    if(threeCount == maximum) answer.push_back(3);
    
    return answer;
}