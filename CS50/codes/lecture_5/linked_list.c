#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int number;
  struct node *next;
} node;

int main(int argc, char *argv[]) {
  // Init a linked lsit
  node *list = NULL;
  // node *list = malloc(sizeof(node));
  // (*list).next = NULL;

  for (int i = 1; i < argc; i++) {
    int number = atoi(argv[i]);

    node *n = malloc(sizeof(node));
    if (n == NULL) {
      return 1; // exit code if no memory can allocate
    }
    n->number = number;
    n->next = NULL;

    // prepend the linked list, even for first element
    n->next = list;
    list = n;
  }

  // Print numbers inside linked lists
  node *ptr = list;

  while (ptr != NULL) {
    printf("%i\n", ptr->number);
    ptr = ptr->next;
  }

  // Free memory
  ptr = list;
  while (ptr != NULL) {
    node *next = ptr->next;
    free(ptr);
    ptr = next;
  }
}
