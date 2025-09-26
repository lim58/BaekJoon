#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
    vector<int> height;
    vector<int> width;
    
    for(int i=0; i<wallpaper.size(); i++) {
        string row = wallpaper[i];
        if(find(row.begin(), row.end(), '#') != row.end()) {
            height.push_back(i);
        }
        
        for(int j=0; j<wallpaper[0].size(); j++) {
            if(wallpaper[i][j] == '#') {
                width.push_back(j);
            }
        }
    }
    
    sort(width.begin(), width.end());
    
    answer.push_back(height[0]);
    answer.push_back(width[0]);
    
    answer.push_back(height[height.size() - 1] + 1);
    answer.push_back(width[width.size() - 1] + 1);
    
    return answer;
}