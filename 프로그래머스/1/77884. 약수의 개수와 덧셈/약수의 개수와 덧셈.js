function solution(left, right) {
    let sum = 0
    for(let i=left; i<=right; i++) {
        let num = 0, hap = 0
        
        for(let j=1; j<=i; j++) {
            if(i % j === 0) {
                hap++
            }
        }
                
        if(hap % 2 === 0) sum += i
        else sum -= i
     
    }
    return sum
}