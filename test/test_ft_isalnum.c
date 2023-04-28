#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_isalnum(void)
{   
    int c = 102;
    int result = ft_isalnum(c);
    if (result == 0)
        write(1,"FALSE", 5);
    else if (result == 1)
        write(1, "TRUE", 4);
}