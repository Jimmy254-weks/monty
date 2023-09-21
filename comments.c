#include <stdio.h>
#include <string.h>

int main(void)
{
char code[100];
while (1)
{
printf("Enter code (or 'exit' to quit):\n");
fgets(code, sizeof(code), stdin);
if (strcmp(code, "exit\n") == 0)
{
printf("Exiting the program.\n");
break;
}
if (code[0] == '#')
{
continue;
}
printf("Executing code: %s", code);
}
return (0);
}

