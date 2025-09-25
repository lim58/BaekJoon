#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    map<string, int> racePlayer;
    for(string s: participant) {
        racePlayer[s] += 1;
    }
    
    for(string s: completion) {
        racePlayer[s] -= 1;
    }
    
    for(auto player: racePlayer) {
        if(player.second > 0) {
            return player.first;
        }
    }
    
    return answer;
}