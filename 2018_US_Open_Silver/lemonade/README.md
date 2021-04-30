# Solution
To make the number of cows in the line as smallest as possible, we should discourge as more cows as possible. Cows with larger w are harder to discourage than 
cows with smaller w, therefore the intuition is letting cows with larger w join first. 
The solution is to use **Greedy Strategy**, we sort the cows in descending order base on w, and keeping letting cows join until no cows want to join. We can also prove 
this greedy strategy using the exchange argument
1. suppose our strategy is not optimal, let's say the solution follow the order of {w1, w2, ... wn}
2. There must exist a pair of cow a and b, where wa < wb and a is before b

We want to prove two things: 
1. If none of a and b can join the list, they still can't join if we exchange their order.
2. If a can join but b can't, they at most one of then can join if we exchange their order.

Readers can think about why they are true.
