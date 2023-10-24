function solution(x) {
    const str = String(x)
    const n = str.split('')
    const hap = n.reduce((acc, curr) => acc + Number(curr), 0)
    
    if(x % hap == 0) {
        return true;
    }
    else {
        return false;
    }
}