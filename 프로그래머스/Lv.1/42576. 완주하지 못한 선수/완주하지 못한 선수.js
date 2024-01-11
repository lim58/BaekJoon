function solution(participant, completion) {
    /*
    completion.forEach((value, index) => {
        let key = participant.findIndex(element => element === value)
        participant.splice(key, 1)
    })
    return participant[0]
    */
    let answer = ""
    participant.sort()
    completion.sort()
    for(let i=0; i<completion.length; i++) {
        if(participant[i] !== completion[i]) {
            answer = participant[i]
            break;
        }
    }
    console.log(answer === ""? participant[participant.length] : answer )
    return answer === ""? participant[participant.length-1] : answer 
    
}