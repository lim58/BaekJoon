function solution(n) {
    let answer = n;
    for(let x=0; x<n; x++) {
        if(n % x == 1) {
            if(answer > x) {
                answer = x
            }
        }
    }
    return answer;
}