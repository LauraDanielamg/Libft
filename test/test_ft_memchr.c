#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

void test_ft_memchr(void)
{
    char str[] = "hello world";
    char *result1 = ft_memchr(str, 'o', strlen(str));
    char *result2 = memchr(str, 'o', strlen(str));
    if (result1 == result2)
        printf("Results match: 'o' found at position %ld\n", result1 - str);
    else
        printf("Results do not match\n");

    char str2[] = "abcdefghij";
    result1 = ft_memchr(str2, 'x', strlen(str2));
    result2 = memchr(str2, 'x', strlen(str2));
    if (result1 == result2)
        printf("Results match: 'x' not found\n");
    else
        printf("Results do not match\n");

    char str3[] = "hello\0world";
    result1 = ft_memchr(str3, '\0', strlen(str3));
    result2 = memchr(str3, '\0', strlen(str3));
    if (result1 == result2)
        printf("Results match: '\\0' found at position %ld\n", result1 - str3);
    else
        printf("Results do not match\n");
}