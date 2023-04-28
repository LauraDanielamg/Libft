#include <stdio.h>
#include <string.h>
#include "libft.h"

char ft_custom_function(unsigned int i, char c)
{
    // Modify the character, for example, by increasing its ASCII value by 1
    return c + 1;
}
void test_ft_strmapi(void)
{ 
    const char *test_str = "Hello, World!";

    printf("Original string: %s\n", test_str);
    char *modified_str = ft_strmapi(test_str, ft_custom_function);
    if (modified_str)
    {
        printf("Modified string: %s\n", modified_str);
        free(modified_str);
    }
    else
    {
        printf("Failed to modify string.\n");
    }
}