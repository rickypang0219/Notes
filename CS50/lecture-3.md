# CS50 Lecture 3 - Algorithms


# Linear Search 
Here's the analogy of linear search. Suppose we have 5 lockers and we assign $1 to $5 dollars in these lockers randomly. Once the money is assigned, we ask which locker has $5 dollar. The naive way to find that locker is via **linear search**, meaning that we open each locker one by one and see which of those contains $5 dollar. IN **pseudo code**, we can express it as 

```
n = number of lockers
For i from 0 to n- 1{
    if ($5 dollar = locker[i]){
        Say Locker[i] has $5 dollar 
    }
}
Return False 

```

The reason why it is called linear search is that in the worst case we need to open all the lockers until we find the $5 dollars.

# Binary Search 
Here is another algorithm to tackle the similar problem. Suppose that we have 7 lockers and a ```money_array``` which is **sorted** in ascending order. Here an **sorted array** is the key why we can leverage the binary search algorithm.  For instance, the money array can be  ```money_array = [1,5,10,20,50,100,200]``` but the we do not know the exact number of each element. Now our task is simple, we wanna find out the locker which has $50 dollar. Instead of linear search, we leverage the **binary search**. The following is the pseudo-code of binary search 

```
If 50 is behind the middle locker{
    Say Yes 
}
Else If the money in middle locker is less than 50{
    Search the remaining left lockers from locker[0] to locker[middle - 1]
}
Else If the  money in middle locker is greater than 50{ 
    Search the remaining right locker from locker[middle +1] to locker[n-1]
}
Else {
    Say NO 50 in all lockers
}

```

# Running Time 

![time complexity](./images/lecture3/time-complex.png)
*Time Comlpexity* 

Here we analyse the time complexity of the algorithms above. We denote that the upper boound of time complexity is $O$ while the lower bound is $\Omega$. The $\Theta$ is used when the upper bound and lower bound are the same. 

* Linear search: $O(n)$, $\Omega(1)$
* Binary search: $O(\log n)$ , $\Omega(1)$

# Coding of Linear 
 
```c
#include <stdio.h> 
#include <cs50.h> 

int main(void){
  // creating an array
  int numbers[] =  {20, 500, 10, 5 ,100,1,50}; 

  int n = get_int("Number: "); 

  for ( int i=0; i<7; i++){
    if (numbers[i] == n){
      printf("Found \n");
      return 0; // successful return 0 quit main 
    }
  }
  printf("Not Found \n");
  return 1;
}
```


## Phonebook Example 
```c
#include <stdio.h>
#include <string.h>
#include <cs50.h>


int main(void){
  string names[] = {"Carter", "David"}; 
  string numbers[] = {"12345678", "23456789"};

  string name = get_string("Name: ");
  for (int i =0; i<2; i++)
  {
    if (strcmp(names[i], name) == 0)
    {
      printf("Found %s\n", numbers[i]);
      return 0;
    }
  }
  printf("Not Found \n");
  return 1;
}

```

# Structs
Array is a very ligth-weight data structure. In C, we can define our own data structure by  using ```struct```. 
  