#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_substr(void)
{
    const char *test_str = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    printf("Original string: \"%s\"\n", test_str);
    char *substring = ft_substr(test_str, start, len);
    if (substring)
    {
        printf("Substring from index %u with length %zu: \"%s\"\n", start, len, substring);
        free(substring);
    }
    else
    {
        printf("Failed to extract substring.\n");
    }
}
