function solution(arr, divisor) {
    const newArr = [];
    arr.forEach((value) => {
        if(value % divisor == 0) {
            newArr.push(value)
        }
    })
    newArr.sort(function(a,b) {return a - b})
    if(newArr.length == 0) {
        newArr.push(-1)
    }
        
    return newArr;
}