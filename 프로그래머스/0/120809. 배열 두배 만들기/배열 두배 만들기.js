function solution(numbers) {
    numbers.forEach((value, index) => (
       numbers[index] = value *2
    ))
    return numbers
}