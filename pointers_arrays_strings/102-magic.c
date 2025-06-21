#include <stdio.h>



int main(void)
{


    int a[5] = {98, 402, 1024, 1337, 404};


    int *p;



    p = a;



    printf("a[2] = %d\n", *(p + 2));
	 return (0);

}
