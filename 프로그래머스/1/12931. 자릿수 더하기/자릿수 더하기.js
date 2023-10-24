function solution(n)
{
    const str = String(n)
    const digital = str.split('')   
    const sum = digital.reduce((acc, curr) => acc + Number(curr), 0)
    
    return sum;
}