#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);
int* turn_binary (int ASCII);

int main(void)
{
  // keep in array form 
  string s = get_string("Message: ");
  const int size = strlen(s);
  // printf("%d\n", size);
  
  // Create ASCII array to store char 

  int ascii_array[size]; 

  for (int i = 0; i < size; i++)
  {
    ascii_array[i] = (int) s[i];
    /* printf("%d\n", ascii_array[i]); */
  }
  for (int j =0; j <size; j++)
  {
    int*  binary_repr = turn_binary( ascii_array[j]); 
    // We print the rightmost to leftmost of the binary_repr since we do not sorted the array in turn_binary funciton 
    // See more on the turn_binary function comment
    for (int k =8 - 1; k>=0; k--)
       {
        print_bulb(binary_repr[k]);
       }
    printf("\n");
  }
}

// reverse engineering 
// print_bulb: Print the bit in 1010 for instace 
// 1010 --> a char after convertion from ASCII 
// Double for loop 
// 1st loop: loop for string , second loop: loop for specific char 
void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}

// Recall that in this alforithm 
// it returns the 2^0 digit to 2^8 digit 
// WHat we want is a sorted array from 2^8 digit to 2^0 digit 
// One trick is that when we print the binary representation, we print the rightmost to leftmost 

int* turn_binary(int ASCII) {
    int* binary = (int*) malloc(8 * sizeof(int));   // Allocate memory on the heap
    int i = 0;
    int num = ASCII;

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    return binary;   // Return a pointer to the allocated memory
}





/* int turn_binary (int ASCII) */
/* { */
/*   // Since we are encoding char, char takes 1 byte = 8bits to represent it  */
/*   int binary[8] ; */
/*   int i = 0 ; */
/*   int num = ASCII;  */
/*   while (num > 0) */
/*   { */
/*     binary[i] = num % 2 ; */
/*     num = num / 2 ;  */
/*     i ++ ;  */
/*   } */
/*   return binary;  */
/*  */
/* } */
/*  */
