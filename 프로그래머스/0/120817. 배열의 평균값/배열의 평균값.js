function solution(numbers) {
   let sum = numbers.reduce((accumulator, current) => (
       accumulator + current
   ), 0)
return (sum/numbers.length).toFixed(1);
}