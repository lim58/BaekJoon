#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    map<string, int> col = {{"code", 0}, {"date", 1}, {"maximum", 2}, {"remain", 3}};
    
    vector<vector<int>> filtered;
    int ext_index = col[ext];
    
    for(auto &row : data) {
        if(row[ext_index] < val_ext) filtered.push_back(row);
    }
    
    int sort_index = col[sort_by];
    sort(filtered.begin(), filtered.end(), [sort_index](auto &a, auto &b) {
        return a[sort_index] < b[sort_index];
    });
    
    return filtered;
}