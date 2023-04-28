#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_memset(void)
{
    char arr1[10];
    char arr2[10];
    int val = 'X';

    ft_memset(arr1, val, 10);
    memset(arr2, val, 10);

    if (memcmp(arr1, arr2, 10) == 0)
    {
        printf("ft_memset and memset produced identical results\n");
    }
    else
    {
        printf("ft_memset and memset produced different results\n");
    }
}