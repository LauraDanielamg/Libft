#include <stdio.h>
#include <string.h>
#include "libft.h"

void custom_function(unsigned int i, char *c)
{
    (void)i;
    // Modify the character, for example, by increasing its ASCII value by 1
    *c = *c + 1;
}

void test_ft_striteri(void)
{ char test_str[] = "Hello, World!";

    printf("Original string: %s\n", test_str);
    ft_striteri(test_str, custom_function);
    printf("Modified string: %s\n", test_str);
}