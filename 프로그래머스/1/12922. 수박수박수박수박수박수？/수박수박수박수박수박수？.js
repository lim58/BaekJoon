function solution(n) {
    const mid = parseInt(n/2)
    let subak = ''
    
    if(n % 2 == 1) {
        for(let i=0; i<mid; i++) {
            subak += "수박"
        }
        subak += "수"
    }
    
    else {
        for(let i=0; i<mid; i++) {
            subak += "수박";
        }
    }
    return subak;
}