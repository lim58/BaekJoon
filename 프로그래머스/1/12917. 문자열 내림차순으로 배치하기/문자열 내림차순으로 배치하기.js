function solution(s) {
    const upper = []
    const lower = []
    const a = s.split("")
    a.forEach((value) => {
        if(value.charCodeAt()<=90) upper.push(value)  
        else lower.push(value)
    })
    upper.sort((a,b)=>b.localeCompare(a))
    lower.sort((a,b)=>b.localeCompare(a))
    console.log(lower)
    
    const answer = [...lower, ...upper]
    return answer.join("")
}