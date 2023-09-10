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
