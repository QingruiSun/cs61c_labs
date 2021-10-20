#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
  node *tortoise = head;
  node *hare = head;
  if (hare == NULL) {
    return 0;
  }
  while (hare != NULL) {
    if ((hare == NULL) || (hare->next == NULL)) {
      return 0;
    }
    hare = hare->next;
    hare = hare->next;
    tortoise = tortoise->next;
    if (hare == tortoise) {
      return 1;
    }
  }
  return 0;
}
