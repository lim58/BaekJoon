#include <vector>
#include <iostream>
using namespace std;

bool check(int number) {
    int count = 0;
    for(int i=1; i<=number; i++) {
        if(number % i == 0) {
            count++;
        }
    }
    return count > 2 ? false : true;
}

int solution(vector<int> nums) {
    int answer = 0;
    
    for(int i=0; i<nums.size()-2; i++) {
        for(int j=i+1; j<nums.size()-1; j++) {
            for(int k=j+1; k<nums.size(); k++) {
                if(check(nums[i] + nums[j] + nums[k])) {
                    answer++;
                }
            }
        }
    }

    return answer;
}