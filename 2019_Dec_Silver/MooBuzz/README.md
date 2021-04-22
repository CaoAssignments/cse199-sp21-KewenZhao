# Understanding the problem
If N = 9, What is the output?
- Moo (because 9 is multiple of 3)
  - Wrong, we only output number
- 16
  - Correct.

# Rephrase the problem
Given number N, Find X so that
- X is not a multiple of 3 or 5
- There are N numbers between [1, X] that are not multiples of 3 or 5.

# Solution
Observe that _lcm(3,5)_ = 15, (lcm stands for Least Common Multiple), therefore every consecutie 15 turns form a cycle。 For any consecutive 15 turns, 
8 numbers are spoken. <br>
Let us go through the example
- from turn 1 to 15, the numbers spoken are 1,2,4,7,8,11,13,14
- from turn 16 to 30, the numbers spoken are 15 + {1,2,4,7,8,11,13,14}
- from turn 31 to 45, the numbers spoken are 15\*2 + {1,2,4,7,8,11,13,14}
<br>
Formally, for the nth cycle, {15n + 1, 15n + 2, 15n + 4, 15n + 7, 15n + 8, 15n + 11, 15n + 13, 15n + 14} will be spoken. 
Therefore every 8 numbers spoken, we know 15 turns have passed. We can handle the remainder using a lookup table.

# edge case
The number of completed cycles is equal to (N-1)/8, not N/8. Why? Because when N = 8, the output is 14, and we havn't completed a cycle yet.
