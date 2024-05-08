function solution(s){
    let pWord = 0, yWord =0
    for(const char of s) {
        if(char === "p" || char === "P") pWord++
        else if (char === "y" || char === "Y") yWord++
    }
    return pWord === yWord
}