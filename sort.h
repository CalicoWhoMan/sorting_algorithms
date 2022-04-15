#ifndef SORT_H
#define SORT_H

/*INCLUDED LIBRARIES*/
#include <stdlib.h>
#include <stdio.h>

/*GIVEN TO ME STRUCT*/
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/*MY FUNCTIONS*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

#endif /*SORT_H*/