function solution(n, m) {
    let LCM=0, GCD=0, max = 0;
    const answer = [];
    
    n < m? max = m : max = n;
    
    for(let i=1; i<=max; i++) {
        if((n % i == 0) && (m%i == 0)) LCM = i;
    }
    console.log(LCM);
    console.log(GCD);
    GCD = (n * m) / LCM;
    answer.push(LCM);
    answer.push(GCD);
    return answer;
}