function solution(s) {
    let count = 0
    let l = 0
    const arr = [...s]
    
    arr.forEach((value) => {
        l++
        let i = value.charCodeAt();
        if((i >= 48) && (i <= 57)) {
            count++
        }
    })
    
    if(count === s.length) {
        if((l === 4) || (l === 6)) {
            return true   
        }
    }
    return false
}