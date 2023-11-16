function solution(price, money, count) {
    let don = 0; 
    for(let i=1; i<=count; i++) {
        don += price * i;
    }
    don = money - don;
    if(don < 0) return don * -1;
    else return 0
}