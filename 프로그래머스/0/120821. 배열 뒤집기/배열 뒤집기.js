function solution(num_list) {
    let result = []
    for(let i=num_list.length-1; i>=0; i--) {
        result.push(num_list[i])
    }
    return result
}