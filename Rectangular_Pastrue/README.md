## Description
http://usaco.org/index.php?page=viewproblem2&cpid=1062


## Understanding the problem
Is this a valid input? <br />
4<br />
1 1 <br />
2 2 <br />
3 3 <br />
3 0 <br />
![image](https://user-images.githubusercontent.com/56232812/115074510-a5515100-9eae-11eb-87e9-650b8667e25e.png)
- no, becasue ` All x coordinates are distinct from each-other, and all y coordinates are distinct from each-other.`
## Key Concepts
 - Problem topics: Geometry
 - Data types and data structures: 2-d array, 2-d prefix sum
 - Problem-solving strategies: brute force


## pesudo code
- Iterate each pairs of cows, there are n*(n-1)/2 pairs in total
- result = n + 1
  - for each pair, we denote their cooridnates as (Xa, Ya) and (Xb, Yb)
  - Let CountLeft = #cows in the rectangle [0,min(Xa,Xb)]×[Ya,Yb]
  - Let CountRight = #cows in the rectangle [max(Xa,Xb),N−1]×[Ya,Yb]
  - result += CountLeft * CountRight
- return result
