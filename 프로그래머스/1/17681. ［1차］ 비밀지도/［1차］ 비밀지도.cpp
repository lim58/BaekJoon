#include <bits/stdc++.h>

using namespace std;

int mapSize;

string binary(int num) {
    string str;
    
    if(num == 0) str.push_back('0');
    
    while(num > 0) {
        str.push_back((num % 2) + '0');
        num /= 2;
    }
    
    reverse(str.begin(), str.end());
    
    while(str.size() < mapSize) {
        str.insert(str.begin(), '0');
    }
    
    return str;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    mapSize = n;
    
    for(int i=0; i<n; i++) {
        string temp;
        string binaryOneCode = binary(arr1[i]);
        string binaryTwoCode = binary(arr2[i]);
        
        for(int j=0; j<n; j++) {
            if(binaryOneCode[j] == '1' || binaryTwoCode[j] == '1') {
                temp.push_back('#');
            } else {
                temp.push_back(' ');
            }
        }
        answer.push_back(temp);
    }
    
    return answer;
}