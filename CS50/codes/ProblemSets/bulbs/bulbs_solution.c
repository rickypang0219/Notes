#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
  string message = get_string("Message: ");
  
  int size = strlen(message); 

  // turn message to binary

  for (int i =0; i< size; i++)
  {
    int binary[8] = {0,0,0,0,0,0,0,0}; 

    // turn messgae to ASCII code 
    int ASCII = message[i]; 

    // convert the ASCII to binary
    int j = 0; 

    while (ASCII > 0)
    {
      binary[j] = ASCII % 2; 
      ASCII = ASCII / 2; 
      j++; 
    }
    for (int k = BITS_IN_BYTE -1 ; k>=0; k--)
    {
      print_bulb(binary[k]);
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
