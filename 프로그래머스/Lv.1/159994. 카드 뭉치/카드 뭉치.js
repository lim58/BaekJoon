function solution(cards1, cards2, goal) {
    let message = "Yes"
    goal.forEach((value) => {
        if(value === cards1[0]) cards1.splice(0, 1)
        else if (value === cards2[0]) cards2.splice(0,1)
        else message = "No"
    }) 
    return message
}