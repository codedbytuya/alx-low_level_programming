#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // Seed the random number generator with the current time

    int n = rand() % 201 - 100; // Generate a random number between -100 and 100

    if (n == 0) {
        printf("%d is zero", n);
    }
    else if (n > 0) {
        printf("%d is positive", n);
    }
    else {
        printf("%d is negative", n);
    }

    return 0;
}
