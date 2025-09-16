#include <string>
#include <vector>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    
//     while (std::min(bill[0], bill[1]) > std::min(wallet[0], wallet[1]) || std::max(bill[0], bill[1]) > std::max(wallet[0], wallet[1])) {
//         if(bill[0] > bill[1]) {
//             bill[0] /= 2;
//         } else {
//             bill[1] /= 2;
//         }
        
//         answer++;
//     }
    
    int max = bill[0] < bill[1] ? bill[1] : bill[0];
    int min = bill[0] < bill[1] ? bill[0] : bill[1];
    
    while(1) {
        if(wallet[0] >= max && wallet[1] >= min || wallet[1] >= max && wallet[0] >= min) {
            break;
        } else {
            max /= 2;
            answer++;
            
            if (max < min) {
                int temp = min;
                min = max < min ? max : min;
                max = temp;
            }

        }  
    }
    
    return answer;
}