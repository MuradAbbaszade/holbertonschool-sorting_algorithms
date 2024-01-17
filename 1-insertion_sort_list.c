#include "sort.h"

/**
 * insertion_sort_list - sorts in ascending order
 * @list: The doubly linked list to sort
 *
 * Return: Nothing!
 */
void insertion_sort_list(listint_t **list)
{
    bool swapOc = false;
    listint_t *current = NULL, *temp = NULL, *previous = NULL;

    if (!list || !(*list) || !(*list)->next)
        return;

    current = *list;
    while (current->next)
    {
        if (current->n > current->next->n)
        {
            current->next->prev = previous;
            if (current->next->prev)
                previous->next = current->next;
            else
                *list = current->next;

            current->prev = current->next;
            current->next = current->next->next;
            current->prev->next = current;
            if (current->next)
                current->next->prev = current;

            current = current->prev;
            print_list(*list);

            if (current->prev && current->prev->n > current->n)
            {
                if (!swapOc)
                    temp = current->next;
                swapOc = true;
                current = current->prev;
                continue;
            }
        }
        if (!swapOc)
            current = current->next;
        else
            current = temp, swapOc = false;
    }
}

