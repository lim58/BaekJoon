function solution(t, p) {
    const len = p.length
    let answer = 0
    for(let i=0; i<t.length; i++) {
        if(t.substr(i, len).length !== len) return answer
        if(Number(p) >= Number(t.substr(i, len))) answer++
    }
    return answer
}