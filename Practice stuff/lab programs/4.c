//Pyramid of a numbers
#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = n - i; k >= 1; k--)
        {
            printf(" ");

        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("%d", i);
            // printf(" ");
        }
        printf("\n");
    }
}