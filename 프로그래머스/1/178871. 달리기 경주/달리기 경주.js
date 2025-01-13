function solution(players, callings) {
    const playerIndexMap = new Map();
    players.forEach((player, index) => {
        playerIndexMap.set(player, index);
    });

    callings.forEach((callName) => {
        const index = playerIndexMap.get(callName);

        if (index > 0) {
            const previousPlayer = players[index - 1];

            players[index] = previousPlayer;
            players[index - 1] = callName;

            playerIndexMap.set(callName, index - 1);
            playerIndexMap.set(previousPlayer, index);
        }
    });

    return players;
}
