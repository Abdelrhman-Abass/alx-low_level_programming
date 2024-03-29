#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
    const listint_t *current;
    size_t count = 0;

    for (current = h; current != NULL; current = current->next)
    {
        printf("%d\n", current->n);
        count++;
    }

    return (count);
}
