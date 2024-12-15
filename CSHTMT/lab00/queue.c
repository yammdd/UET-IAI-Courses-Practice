/* 
 * Code for basic C skills diagnostic.
 * Developed for courses 15-213/18-213/15-513 by R. E. Bryant, 2017
 * Modified to store strings, 2018
 */

/*
 * This program implements a queue supporting both FIFO and LIFO
 * operations.
 *
 * It uses a singly-linked list to represent the set of queue elements
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "harness.h"
#include "queue.h"

/*
  Create empty queue.
  Return NULL if could not allocate space.
*/
queue_t *q_new()
{
    queue_t *q =  malloc(sizeof(queue_t));
    /* What if malloc returned NULL? */
    if (q != NULL) {
      q->head = q->tail =  NULL;
      q->N = 0;
    }
    return q;
}

/* Free all storage used by queue */
void q_free(queue_t *q)
{
    if (q == NULL) {
      return;
    }
    list_ele_t *cur = q->head;
    free(q);
    while(cur != NULL) {
      list_ele_t *tmp = cur;
      cur = cur->next;
      free(tmp->value);
      free(tmp);
    }
}

/*
  Attempt to insert element at head of queue.
  Return true if successful.
  Return false if q is NULL or could not allocate space.
  Argument s points to the string to be stored.
  The function must explicitly allocate space and copy the string into it.
 */
bool q_insert_head(queue_t *q, char *s)
{
    if (q == NULL) {
      return false;
    }
    list_ele_t *newh = malloc(sizeof(list_ele_t));
    if (newh == NULL) {
      return false;
    }
    newh->value = malloc(strlen(s) + 1);
    if (newh->value == NULL) {
        free(newh);
        return false;
    }
    newh->next = q->head;
    strcpy(newh->value, s);
    q->head = newh;
    q->N++;
    if (q->tail == NULL) {
      q->tail = newh;
    }
    return true;
}


/*
  Attempt to insert element at tail of queue.
  Return true if successful.
  Return false if q is NULL or could not allocate space.
  Argument s points to the string to be stored.
  The function must explicitly allocate space and copy the string into it.
 */
bool q_insert_tail(queue_t *q, char *s)
{
    if (q == NULL) {
      return false;
    }
    list_ele_t *newt = malloc(sizeof(list_ele_t));
    if (newt == NULL) {
      return false;
    }
    newt->value = malloc(strlen(s) + 1);
    if (newt->value == NULL) {
        free(newt);
        return false;
    }
    strcpy(newt->value, s);
    newt->next = NULL;
    if (q->tail != NULL) {
      q->tail->next = newt;
    } else {
      q->head = newt;
    }
    q->tail = newt;
    q->N++;
    return true;
}

/*
  Attempt to remove element from head of queue.
  Return true if successful.
  Return false if queue is NULL or empty.
  If sp is non-NULL and an element is removed, copy the removed string to *sp
  (up to a maximum of bufsize-1 characters, plus a null terminator.)
  The space used by the list element and the string should be freed.
*/
bool q_remove_head(queue_t *q, char *sp, size_t bufsize)
{
    if (q == NULL || q->head == NULL) {
      return false;
    }
    list_ele_t *cur = q->head;
    if (sp != NULL) {
        strncpy(sp, cur->value, bufsize - 1);
        sp[bufsize - 1] = '\0';
    }
    q->head = cur->next;
    if (q->head == NULL) {
      q->tail = NULL;
    }
    free(cur->value);
    free(cur);
    q->N--;
    return true;
}

/*
  Return number of elements in queue.
  Return 0 if q is NULL or empty
 */
int q_size(queue_t *q)
{
    if (q == NULL) {
      return 0;
    }
    return q->N;
}

/*
  Reverse elements in queue
  No effect if q is NULL or empty
  This function should not allocate or free any list elements
  (e.g., by calling q_insert_head, q_insert_tail, or q_remove_head).
  It should rearrange the existing ones.
 */
void q_reverse(queue_t *q)
{
    if (q == NULL || q->head == NULL) {
      return;
    }
    list_ele_t *pre = NULL, *cur = q->head, *next = NULL;
    q->tail = q->head;
    while (cur != NULL) {
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    q->head = pre;
}

