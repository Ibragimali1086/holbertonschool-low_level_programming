#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to an array of 8 chars (8x8 chessboard)
 */
void print_chessboard(char (*a)[8])
{
    int i, j;

    for (i = 0; i < 8; i++) /* satır üçün */
    {
        for (j = 0; j < 8; j++) /* sütun üçün */
            _putchar(a[i][j]); /* element çap et */
        _putchar('\n'); /* hər satırdan sonra yeni sətir */
    }
}
