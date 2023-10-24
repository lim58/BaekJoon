function solution(phone_number) {
    const phoneNum = phone_number.slice(-4, phone_number.length)
    const starNum = phone_number.length - phoneNum.length;

    const star = [];
    for(i=0; i<starNum; i++) {
            star.push('*')
    }
    
    const stars = star.join('');
    return `${stars}${phoneNum}`
}