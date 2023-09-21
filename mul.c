#include "monty.h"

/**
* f_mul - Multiplies the top two elements of the stack.
* @head: Pointer to the stack's head.
* @counter: Current line number in the script.
* Return: No return value.
*/
void f_mul(stack_t **head, unsigned int counter)
{
stack_t *current;
int stack_length = 0, multiplication_result;
current = *head;
while (current != NULL)
{
current = current->next;
stack_length++;
}
if (stack_length < 2)
{
fprintf(stderr, "L%d: Error - Insufficient elements-stack \n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
current = *head;
multiplication_result = current->next->n * current->n;
current->next->n = multiplication_result;
*head = current->next;
free(current)
}
