#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_memcmp(void)
{
    char s1[] = "hello";
    char s2[] = "world";
    size_t n = strlen(s1);

    // Test ft_memcmp
    int result1 = ft_memcmp(s1, s2, n);
    printf("Result of ft_memcmp: %d\n", result1);

    // Test memcmp
    int result2 = memcmp(s1, s2, n);
    printf("Result of memcmp: %d\n", result2);
}