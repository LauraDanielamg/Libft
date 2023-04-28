#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_strjoin(void)
{
    const char *test_str1 = "Hello, ";
    const char *test_str2 = "World!";

    char *joined_str = ft_strjoin(test_str1, test_str2);
    if (joined_str)
    {
        printf("Joined string: %s\n", joined_str);
        free(joined_str);
    }
    else
    {
        printf("Failed to join strings.\n");
    }
}