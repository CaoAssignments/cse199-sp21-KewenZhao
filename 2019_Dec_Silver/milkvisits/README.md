# Solution
The naive solution is to manually walk from A to B to see if C appears. <br>
However, Since there are only two types of milk, the output is 0 only if both following conditions are true.
- milk at farm A is not C
- All cows from the A to B are the same type

We can easily check if the first condition. How do we know the second one?<br>
It turns out that first, we can label the components that are the same type. A and B are in the same component if all cows on the path between them are of the same type.
We can label these components using DFS. <br>
Then we check if A and B are within the same component. If they are, that means the second condition is true.
