#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_strnstr(void)
{
    char *haystack = "Hola gente";
    char *needle = "gen";

    printf("%s", ft_strnstr(haystack, needle, 11));
}