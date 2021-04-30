## understand the problem
What's the behavior of the provided script?
- sort array in ascending order
- sort array in descending order -- false


It's important to see the [visualization of bubble sort](https://www.youtube.com/watch?v=Cq7SMsQBEUw), look at the movement of small versus large numbers. What difference did you observe? 
## Observations
2. In one cycle, a large number is continuously moving back many times, but a small number only move left one at a time, so we just count for each number, how many left moves are necessary, and the maximum value is the answer.
3. To figure out how many time a number need to move left, we calculate the distance from its current position to its final position. We can obtain the final positions by applying `zip sort` to the array first.

## Solution
The answer is max(current_index - final_index)


