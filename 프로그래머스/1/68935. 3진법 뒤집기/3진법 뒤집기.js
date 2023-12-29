function solution(n) {
    let a = n.toString(3)
    a = a.split("").reverse().join("");
    a = parseInt(a, 3).toString(10)
    
    return Number(a)
}