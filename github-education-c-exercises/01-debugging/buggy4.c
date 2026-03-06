// Buggy example for printf
#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 3; i++)
    {
        printf("i is %i\n", i);
        printf("#\n"); // this also works perfectly fine, I don't see any bugs here.
    }
}
