function solution(s) {
    const mid = parseInt(s.length/2)+1;
    
    if(s.length % 2 === 1) {
        s = s.substring(mid-1, mid);
    }
    else {
        s = s.substring(mid-2, mid)
    }
    
    return s;
}