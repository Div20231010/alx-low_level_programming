#include <stdio.h>

void _puts_recursion(char *s)
{
    if (*s == '\0') // Base case: if we reach the end of the string
    {
        putchar('\n');
        return;
    }

    putchar(*s);
    _puts_recursion(s +1);
}

int main()
{
    char str[] = "Hello, World!";
    _puts_recursion(str);
    return 0;
}
