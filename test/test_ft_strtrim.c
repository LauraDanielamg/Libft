#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_strtrim(void)
{
    const char *test_str = "  Hello, World!  ";
    const char *trim_set = " ";

    printf("Original string: \"%s\"\n", test_str);
    char *trimmed_str = ft_strtrim(test_str, trim_set);
    if (trimmed_str)
    {
        printf("Trimmed string: \"%s\"\n", trimmed_str);
        free(trimmed_str);
    }
    else
    {
        printf("Failed to trim string.\n");
    }
}