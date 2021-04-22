## Description
http://usaco.org/index.php?page=viewproblem2&cpid=1062


## Understanding the problem

## Key Concepts
 - Problem topics: Geometry
 - Data types and data structures: 2-d array, DAG
 - Problem-solving strategies: Sorting


## pesudo code
```c
sort all eastward cows by their y and all northward cows by their x
for a in eastCows:
  for b in northCows:
    if a stops b:
      #stopped by a += 1 + #stopped by b
    else if b stops a:
      #stopped by b += 1 + #stopped by a
    else:
      continue
```
