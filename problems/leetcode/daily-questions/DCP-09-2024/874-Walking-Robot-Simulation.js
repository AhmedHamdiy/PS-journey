/**
 * @param {number[]} commands
 * @param {number[][]} obstacles
 * @return {number}
 */
var robotSim = function(commands, obstacles) {
    
        let obstacleSet = new Set(obstacles.map(obstacle => obstacle[0] + "," + obstacle[1]));
            let directions = [[0, 1], [1, 0], [0, -1], [-1, 0]];  
                let x = 0, y = 0, direction = 0;
                    let maxDistance = 0;

                        for (let command of commands) {
                                if (command === -1) {
                                            direction = (direction + 1) % 4;
                                                    } else if (command === -2) {
                                                                direction = (direction + 3) % 4;
                                                                        } else {
                                                                                    for (let i = 0; i < command; i++) {
                                                                                                    let newX = x + directions[direction][0];
                                                                                                                    let newY = y + directions[direction][1];
                                                                                                                                    if (!obstacleSet.has(newX + "," + newY)) {
                                                                                                                                                        x = newX;
                                                                                                                                                                            y = newY;
                                                                                                                                                                                                maxDistance = Math.max(maxDistance, x * x + y * y);
                                                                                                                                                                                                                } else {
                                                                                                                                                                                                                                    break;
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                            }

                                                                                                                                                                                                                                                                                return maxDistance;
};