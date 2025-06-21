#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char password[7];
    int i, sum = 0, diff;
    
    srand(time(NULL));
    
    for (i = 0; i < 6; i++)
    {
        password[i] = 33 + rand() % 94;  // printable ASCII characters from '!' to '~'
        sum += password[i];
    }
    password[6] = '\0';

    diff = 2772 - sum;  // 2772 is a special sum required by the crackme

    for (i = 0; i < 6; i++)
    {
        if (diff <= 126 - password[i])
        {
            password[i] += diff;
            break;
        }
        else
        {
            diff -= 126 - password[i];
            password[i] = 126;
        }
    }
    
    printf("%s\n", password);
    return (0);
}
