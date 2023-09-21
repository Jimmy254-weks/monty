#include "monty.h"

/**
* addqueue - Add a node to the end of the queue.
* @n: New value to add to the queue.
* @head: Pointer to the head of the queue.
* Return: No return value.
*/
void addqueue(stack_t **head, int n)
{
stack_t *new_node, *current;
current = *head;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
exit(EXIT_FAILURE);
}
new_node->n = n;
new_node->next = NULL;
if (current)
{
while (current->next)
{
current = current->next;
}
}
if (!current)
{
*head = new_node;
new_node->prev = NULL;
}
else
{
current->next = new_node;
new_node->prev = current;
}
}
