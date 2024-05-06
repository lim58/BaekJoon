function solution(array, height) {
    let answer = 0
    array.forEach((value) => {
        if(value > height) answer++
    })
    return answer
}