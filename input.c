#include <stdio.h>
#include <string.h>

int main(void)
{
    char inputStr[1024];
    int intVal;

    // Loop forever.

    for (;;)
    {
        // Get a string from the user, break on error.

        printf ("Enter your string: ");
        if (fgets (inputStr, sizeof (inputStr), stdin) == NULL)
            break;

        // Break if nothing entered.

        if (strcmp (inputStr, "\n") == 0)
            break;

        // Get and print integer.

        if (sscanf (inputStr, "%d", &intVal) != 1)
            printf ("scanf failure\n");
        else
            printf ("You entered %d\n", intVal);
    }

    return 0;
}
