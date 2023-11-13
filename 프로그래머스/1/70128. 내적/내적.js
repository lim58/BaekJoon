function solution(a, b) {
    let hap = 0
    for(let i=0; i<a.length; i++) {
        hap += a[i] * b[i]
    }
    return hap
}