function solution(num_list) {
    let even = 0, odd = 0
    num_list.forEach((value) => {
        if(value % 2 == 0) even++
        else odd++
    })
    return [even, odd]
}