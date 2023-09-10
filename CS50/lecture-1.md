# CS50 - Lecture 1 : C 


Terminology: 
* Source Code: The code written by human beings 
* Machine Code: The code only with 0's and 1's which allows the machines can understand 
* Compiler: A compiler convert the source code to machine code 



# Hello World in C  

The below code is the C-version of printing the 'Hello, world'. 
```C
// file name called hello.c
#include <stdio.h>

int main(void)
{
    printf("Hello,World \n");
}
```
After writing this source code in either Vim or VS Code, we need to **compile** it using compiler such that we can really print out the "Hello World" message in terminal. In **macOS**, we can compile it using the built in C compiler -- Clang. In this way, the Clang returns an **a.out** file. In order to run it, we can simply type the following command in terminal 

> $ clang hello.c 
> 
>$ ./a.out

In CS50 course, we rather use **make** command to compile the code. We simply type the following commands in terminal and then done

>$ make hello 
>
>$ ./hello 

Suppose that we forget to type the semi-colon next to the ```printf``` funciton, the compiler will tell us the following error message 

```c
hello.c:5:28: error: expected ';' after expression
  printf("Hello, world \n")
                           ^
                           ;
1 error generated.
make: *** [hello] Error 1
```
In this case, the compiler does not sucessfully compile the program and we need to modify in followed by the error messages. 



# Why include #include <stdio.h> ? 

Let's try to comment out the ```#include <stdio.h>``` in our ```hello.c``` code and see what will happen. 

```c
hello.c:5:3: error: call to undeclared library function 'printf' with type 'int (const char *, ...)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  printf("Hello, world \n");
  ^
hello.c:5:3: note: include the header <stdio.h> or explicitly provide a declaration for 'printf'
1 error generated.
make: *** [hello] Error 1
```
The error message comes out and it says that ```call to undeclared library function 'printf'...```. The reason of poping out this error message is that the ```printf``` function depends on the library ```stdio```, where the ```stdio``` is another code written by others and we want to call it and use it in our code. The ```stdio.h``` is the so-called header file in C/C++. 


# Writing Conditions in C 



```c
#include <stdio.h> 

int main() 
{
  int x;
  printf("What's x?");
  scanf("%d", &x);

  int y;
  printf("What's y?");
  scanf("%d", &y);

  if (x<y)
  {
    printf("x is less than y \n");
  }
  else if ( x > y) 
  { 
    printf("x is not less than y \n"); 
  } 
  else 
  { 
    printf("x is equal y \n");
  }

}
```



```c
#include <stdio.h> 

int main()
{
  char c;
  printf("Do you agree with me? ");
  scanf(" %c", &c);
   
  //  || means "OR" operation 
  if (c == 'y' || c == 'Y')
  { 
    printf("Agreed \n"); 
  }
  
  else if ( c == 'N' || c == 'n')
  {
    printf("Not agree \n");
  }
  
}
```


# For and While loop


```c
#include <stdio.h> 

int main()
{
  int i; 
  for (i=1 ; i<=10; i++)
  {
    printf("Meow \n");
  }
}

```



```c
#include <stdio.h>

int main()
{
  int counter = 0; 
  while ( counter < 10)
  { 
    printf("Meow \n");
    counter++;
  }
}
```



# Nested Loops 

```c
#include <stdio.h> 

int main(){
  // Get size of grid
  int n; 
  do
  { 
    printf("Size: ");
    scanf("%d", &n);
  }
  while (n<1);

  // Print grid of bricks
  for (int i=0; i<n ; i++)
  {
    for (int j=0; j<n;j++)
    {
      printf("#");
    }
    printf("\n");
  }
}
```


# Abstraction and Function 

```c
#include <stdio.h>

// tease the compilers that we give the compiler the hints that these funcitons exist in the source code 
int get_size(void); 
void print_grid(int n);


int main(void){

  // Get the size of grid 
  int n = get_size();
  
  // Print the size of grid
  print_grid(n);

}

int get_size(void){
  int n;
  do
  {
    printf("Size: ");
    scanf("%d", &n);
  }
  while (n<1);
  return n;
}

// Use void since it does not contain any return, it just has side effect on printing something
void print_grid(int n){
  for (int i=0; i<n ; i++)
  {
    for (int j=0; j<n;j++)
    {
      printf("#");
    }
    printf("\n");
  }
}
```


# Variable Scope 

A variable only exists inside the most recent cyrly braces we opened.

```c
int get_size(void){
  int n;
  do
  {
    n = get_integer("Integer: ");
  }
  while (n<1);
  return n;
}
```
If I declare ```int n``` in line 2, I can use it anywhere between line 3 to line 8. If we comment out line 2

```c
int get_size(void){
  // int n; we do not include the int n 
  do
  {
    n = get_integer("Integer: ");
  }
  while (n<1);
  return n;
}
```
then ```n``` only exists in line 5 and for line 6 and 7 the ```while``` and ```return``` cannot see where the ```n``` is, resulting in error message.


# Floating Point Imprecision 

```c
#include <stdio.h>

int main(){
  long x;
  printf("What's x: ");
  scanf("%ld", &x);

  long y;
  printf("What's y: ");
  scanf("%ld", &y);
  

  // For division
  // without using (float) to convert x and y
  // the compiler will truncate the decimal 
  // change float to dounble to ease the floating point imprecision
  // float supports 32 bits, double supports 64 bits
  double z = (double) x /  (double) y; 

  printf("%.20f\n", z);
}
```
