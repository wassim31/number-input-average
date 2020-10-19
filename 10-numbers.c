#include <stdio.h>
#include <stdlib.h>
/* a simple alorithm that calcul the average of 10 number-input and 1 < number < 100 */

int main(int argc, char *argv[])
{
    int n, i = 0, x = 0;
    for (; i < 10 ; i++)
    {
        scanf("%d", &n);
        while(n < 1 || n > 100)
        {
            printf("Enter a number between 1 and 100\n");
            scanf("%d", &n);
        }
        x = x + n;
    }
    printf("THE SUM IS : %d\n", x);
    return 0;
}
