#include <stdio.h>
#include <cs50.h>

int n;
int main(void)
{
    // This counts your Height
    do
    {
        n = get_int("positive number: ");
    }
    while (n < 1 || n > 8);
    //This prints your left pyramid
    for (int a = 0; a < n; a++)
    {
        for (int c = n - 1; c > a; c--)
        {
            printf(".");
        }
        for (int b = 0; b <= a; b++)
        {
            printf("#");
        }
        // This creates your space between
        printf("  ");
        // This creates the right side
        for (int e = 0; e <= a; e++)
        {
            printf("#");
        }
        printf("\n");  
    }
    
}