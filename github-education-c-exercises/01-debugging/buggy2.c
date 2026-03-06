// Missing cs50.h, variable's type, semicolon, %s, and second printf argument.
#include <stdio.h>
// include <cs50.h> -- This would work, but I prefer scanf

int main(void)
{
    char name[128];
    
    printf("What's your name? \n");
    scanf("%s", name);

    printf("hello, %s\n", name);
}
