//#include <cs50.h>
#include <stdio.h>

int string_length(char s[]);

int main(void)
{
    char name[100];
    printf("Name: ");
    scanf("%99s", name);
    int len = string_length(name);
    printf("%i\n", len);
}

int string_length(char s[])
{
    int sum = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        sum++;
    }
    
    return sum;
}
