## Description
http://usaco.org/index.php?page=viewproblem2&cpid=1062


## Understanding the problem
Suppose this is the current cowvid situation <br />
![image](https://user-images.githubusercontent.com/56232812/115070860-57d2e500-9eaa-11eb-9232-afba5fb3770d.png)<br />
which of these situations is valid for the **next day**?<br />

- ![image](https://user-images.githubusercontent.com/56232812/115072115-fb70c500-9eab-11eb-8bdc-941fd717c6c1.png)
No, you can not do both duplicating and moving per day<br />
- ![image](https://user-images.githubusercontent.com/56232812/115072039-e3994100-9eab-11eb-9288-8307a6e89381.png)
No, You need to reduce the #cows from where you depart by 1<br />
- ![image](https://user-images.githubusercontent.com/56232812/115071947-c49aaf00-9eab-11eb-9073-af16a1981201.png)
No, You cannot move more than once per day<br />
- ![image](https://user-images.githubusercontent.com/56232812/115071808-8e5d2f80-9eab-11eb-9371-db9e0957e8b9.png)
Yes<br />
## Key Concepts
 - Problem topics: Tree
 - Data types and data structures: 1-d array
 - Problem-solving strategies: Greedy


## pesudo code
- We check how many children each node has. 
- If a node has #x children, then it contribute log(x+1) to the answer
