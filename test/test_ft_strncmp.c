#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_strncmp(void)
{
    const char *test_strings[][2] = {
        {"Hello, World!", "Hello, World!"},
        {"Hello, World!", "Hello, world!"},
        {"Hello, World!", "Hello, Worl"},
        {"abc", "abcde"},
        {"", ""}
    };
    size_t test_cases = sizeof(test_strings) / sizeof(test_strings[0]);

    for (size_t i = 0; i < test_cases; i++)
    {
        int result = ft_strncmp(test_strings[i][0], test_strings[i][1], 20);
        printf("Comparing \"%s\" and \"%s\": %d\n", test_strings[i][0], test_strings[i][1], result);
    }
}