#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;

    do
    {
        change = get_float("How much change is owed: ");
    }
    while (change < 0);

    // Convert dollars to cents and round to the nearest integer
    int convertCents = round(change * 100);

    // Array representing coin denominations in cents
    int denominations[] = {25, 10, 5, 1};
    int coins = 0;

    for (int i = 0; i < 4; i++)
    {
        // Calculate the number of coins of the current denomination
        coins += convertCents / denominations[i];

        // Update the remaining cents after using the current denomination
        convertCents %= denominations[i];
    }

    printf("%d\n", coins);

    return 0;
}
