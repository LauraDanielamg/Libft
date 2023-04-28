#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_strdup(const char *s)
{
    char *original_result = strdup(s);
    char *ft_result = ft_strdup(s);

    if (strcmp(original_result, ft_result) == 0)
    {
        printf("PASS: \"%s\"\n", s);
    }
    else
    {
        printf("FAIL: original=\"%s\", ft=\"%s\"\n", original_result, ft_result);
    }

    free(original_result);
    free(ft_result);
}

void test_ft_itoa(void)
{
    test_strdup("Hello, world!");
    test_strdup("This is a test.");
    test_strdup("");
    test_strdup("A string with special characters: !@#$%^&*()");
    test_strdup("A string with Unicode characters: こんにちは世界");
}