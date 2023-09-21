#include "monty.h"

/**
* f_div - Divides the top two elements of the stack.
* @head: Pointer to the stack's head.
* @counter: Current line number in the script.
* Return: No return value.
*/
void f_div(stack_t **head, unsigned int counter)
{
stack_t *current;
int stack_length = 0, division_result;
current = *head;
while (current != NULL)
{
current = current->next;
stack_length++;
}
if (stack_length < 2)
{
fprintf(stderr, "L%d: Error - Insufficient elements in the stack\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
current = *head;
if (current->n == 0)
{
fprintf(stderr, "L%d: Error - Division by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
division_result = current->next->n / current->n;
current->next->n = division_result;
*head = current->next;
free(current);
}
