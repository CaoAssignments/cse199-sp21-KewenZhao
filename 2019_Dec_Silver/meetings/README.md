# Solution
- Observation 1: When two cows meet, switching velocity is equivalent to switching weight without changing velocities.<br>


Therefore we need to know the weight of each cow when they reached a barn.
- Observation 2: The k leftmost cows with di=-1 will end up with the weight of the k leftmost cow. Similarly, The k rightmost cows with di=1 will end up with the weight of the k rightmost cow.
This can be observed with the following example: ![image](https://user-images.githubusercontent.com/56232812/115800571-bf4bd180-a38f-11eb-9e88-1b59d1e5fce0.png)
## Part I: calculate T.
With these observations, for each cow, we know how much time it takes to arrive at a barn, and the final weight it contributes. Therefore we can sort the cows based on their arrival time,
and maintain the accumualted weight to determine T.

## Part II: calculate meetings.<br>
- Observation 3: A pair of cows will only meet if their directions are different, and their distance is <= 2\*T


For each cow with di=-1, we need to know how many cows with di=1 and distance <= 2\*T. We can maintain a queue of left-going cows so that the distance between the first
and last cow is no more than 2\*T, and we iterate from left to right
