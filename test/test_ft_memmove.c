#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_memmove(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    char *result1;
    char *result2;

    printf("Before ft_memmove: %s\n", str1);
    printf("Before memmove: %s\n", str2);

    result1 = ft_memmove(str1 + 3, str1, strlen(str1) - 2);
    result2 = memmove(str2 + 3, str2, strlen(str2) - 2);

    printf("After ft_memmove: %s\n", result1);
    printf("After memmove: %s\n", result2);

    if (strcmp(result1, result2) == 0)
        printf("The results are the same.\n");
    else
        printf("The results are different.\n");
}