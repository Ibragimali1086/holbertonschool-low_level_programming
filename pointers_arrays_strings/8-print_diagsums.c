#include <stdio.h>

void print_diagsums(int *a, int size)
{
    int i;
    int sum1 = 0, sum2 = 0;

    for (i = 0; i < size; i++)
    {
        sum1 += a[i * size + i];            // Sol üstdən sağ alt diaqonal
        sum2 += a[i * size + (size - 1 - i)]; // Sağ üstdən sol alt diaqonal
    }

    printf("%d, %d\n", sum1, sum2);
}
