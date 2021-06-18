#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n);

int main(void)
{

    /***
     * Test for memset
     * 
     */

    char s[50] = "Hello schol";

    printf("Before ft_memset: %s", s);
    ft_memset(s + 6, '*', 5 * sizeof(char));
    printf("After ft_memset: %s", s);

    // memset
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    int aux = sizeof(char);
    int aux2 = sizeof(char)*8;
    int aux3 = sizeof(int);
    printf("\n [testing] sizeof(char): %d, *8: %d\n", aux, aux2);
    printf("\n [testing] sizeof(int): %d \n", aux3);
    

    // Fill 8 characters starting from str[13] with '.'
    memset(str + 13, '.', 8 * sizeof(char)); 

    printf("After memset():  %s", str);

    return 0;
}
