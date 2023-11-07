function solution(n) {
    const reversedArr = [];
    while (n > 0) {
        reversedArr.push(n % 10);
        n = Math.floor(n / 10);
    }
    return reversedArr;
}
