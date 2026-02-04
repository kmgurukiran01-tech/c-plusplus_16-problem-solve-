# c-plusplus_16-problem-solve-
Problem description
Implement different functions like insert(), print_contents(), erase(), find() and size() on set s.
​

A query can be of five types:
​

a x -> Inserts an element x to the set s.
​

b -> Prints the contents of the set s space separated.
​

c x -> Erases an element x from the set s.
​

d x -> Prints 1 if the element x is present in the set s else print -1.
​

e -> Prints the size of the set s.
​

Example 1
Input:
​

q = 6
Queries =
a 1
a 2
a 3
b
c 2
b

Output:
​

1 2 3 1 3

Explanation:
​

There are six queries. Queries are performed in this order:
​

a 1 -> Insert 1 to set, now set has {1}.
​

a 2 -> Inserts 2 to set, now set has {1, 2}.
​

a 3 -> Inserts 3 to set, now set has {1, 2, 3}.
​

b -> Prints the set contents i.e. 1 2 3.
​

c 2 -> Removes 2 from the set.
​

b -> Prints the set contents i.e. 1 3.
​

Example 2
Input:
​

q = 5
Queries =
a 1
a 11
e
d 5
d 2

Output:
​

2 1 -1

Explanation:
​

There are five queries. Queries are performed in this order:
​

a 1 -> Inserts 1 to set, now set has {1}.
​

a 11 -> Inserts 11 to set, now set has {1, 11}.
​

e -> Prints the size of the set i.e. 2.
​

d 5 -> Since 5 is present, prints 1.
​

d 2 -> Since 2 is not present in the set, prints -1.
​

Your task
Your task is to implement the set operations functions based on the types of queries.
​

Set operations functions:
​

insert(): Adds element x to set s.
​

print_contents(): Prints all elements in set s in ascending order.
​

erase(): Removes element x from set s.
​

find(): Returns 1 if x is in set s, otherwise -1.
​

size(): Returns the number of elements in set s.
​