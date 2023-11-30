function solution(num_list) {
    let mul = 1, sum = 0;
    num_list.forEach((value) => {
        mul *= value
        sum += value
    })
    sum = sum*sum;
    return mul<sum? 1 : 0
}