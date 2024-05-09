function solution(array) {
    const newArr = array.sort(function(a, b) {return a-b})
    return newArr[Math.floor(array.length / 2)]
}