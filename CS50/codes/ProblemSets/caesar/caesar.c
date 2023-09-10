#include <cs50.h>
#include <stdio.h>
#include <ctype.h> // for isupper and islower
#include <stdlib.h> // for atoi 
#include <string.h>


char shift_upper(char c, int key); 
char shift_lower(char c, int key); 


int main(int argc, string argv[]) 
{
  int key = atoi(argv[1]) ;
  string message = get_string("Plaintext: "); 
  int size = strlen(message); 
  

  // inplace changing the string 'array' elements 
  for (int i =0; i<size; i++)
  {
    if (islower(message[i])) {
      message[i] = shift_lower(message[i], key);
    } else if (isupper(message[i])) {
      message[i] = shift_upper(message[i], key);
    }
  }
  printf("Ciphertext: %s\n", message);
}

char shift_upper(char c, int key)
{
  int ascii_code = (int) c;
  ascii_code -= 65; // shifting to 0 - 25 
  int shift_code = (ascii_code + key ) % 26 + 65; // re-shift to ACSII version  
  return (char) shift_code; 
}

char shift_lower(char c, int key)
{
  int ascii_code = (int) c;
  ascii_code -= 97; // shifting to 0 - 25 
  int shift_code = (ascii_code + key ) % 26 + 97; // re-shift to ACSII version  
  return (char) shift_code; 

}
