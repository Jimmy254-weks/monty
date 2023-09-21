#include "monty.h"

/**
* f_rotr - Rotate the stack to move the top element to the bottom.
* @head: Pointer to the stack's head.
* @counter: Current line number in the script (unused).
* Return: No return value.
*/
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *current, *last;
current = *head;
if (current == NULL || current->next == NULL)
{
return;
}
while (current->next)
{
last = current;
current = current->next;
}
last->next = NULL;
current->next = *head;
(*head)->prev = current;
current->prev = NULL;
*head = current;
}
