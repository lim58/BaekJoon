function solution(s) {
    const array = s.split(" ")    
    let max=array[0], min=array[0]

    for(let i=0; i<array.length; i++) {
        if(max<Number(array[i])) max = array[i]
        if(min>Number(array[i])) min = array[i]
    }
    return `${min} ${max}`
}