#include <stdio.h>

int main(void) {
    
    char  name[20];
    printf("What's your name?"); 
    scanf("%s", name);
    // gets(char);
    // string name = get_string("What is your name? ");
    printf("Hello, %s!\n", name);
    return 0;
}
