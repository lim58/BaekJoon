function solution(a, b, n) {
    let answer = 0
    let remain = 0
    
    while(n >= a) {
        remain = n % a
        n = parseInt(n/a) * b
        answer += n
        n += remain 
    }
    return answer;
}