// Buggy example for debug50
//#include <cs50.h> -- I prefer scanf
#include <stdio.h>

void print_column(int height);

int main(void)
{
    int h;
    printf("Height: \n");
    scanf("%d", &h);
    print_column(h);
}

void print_column(int height)
{
    for (int i = 1; i <= height; i++)
    {
        printf("#\n");
    }
}
