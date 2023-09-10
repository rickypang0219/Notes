#include <stdio.h>


// * denotes a pointer 
// & denotes the address of a pointer 

int main(void)
{
  int n = 50;
  int *p  = &n; 
  printf("%p\n", p);


  // String = Pointer of char 

  /* char *s = "Hi!"; */

  // print pointer of s 
  // The pointer of s and s[0] is the same 
  /* printf("%p\n",s); */
  /* printf("%p\n", &s[0]);  */
  /* // The pointer of s[0] and s[1] is shifted by 1  */
  /* printf("%p\n", &s[1]);  */


}
