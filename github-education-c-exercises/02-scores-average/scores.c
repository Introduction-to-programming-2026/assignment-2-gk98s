//#include <cs50.h>
#include <stdio.h>

#define N 3 // putting a const int in scores[N] throws an error.

// TODO: implement this function
float average(int length, int array[]);

int main(void)
{
    int scores[N];

    for (int i = 0; i < N; i++) {
        printf("Score: ");
        scanf("%d", &scores[i]);
    }

    printf("Average: %.2f\n", average(N, scores));
}

float average(int length, int array[])
{
    float sum = 0.0;

    for (int i = 0; i < length; i++) {
        sum += array[i];
    }

    return sum /= length;
}
