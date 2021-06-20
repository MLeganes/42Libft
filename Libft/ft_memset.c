#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    //int aux_n =0;
    // pointer.*s pinter = address
    //

    size_t size;
    size = 0;

    while (size <= n)
    {
        printf("This is ft_memset c: %d \n", c);
        //*s = c;
        s++;
        size++;
    }
    return s;
}

