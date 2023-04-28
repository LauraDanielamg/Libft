#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_isdigit(void)
{ 
    int n = '2';
    int result = ft_isdigit(n);
    if (result == 0)
        write(1,"FALSE", 5);
    else if (result == 1)
        write(1, "TRUE", 4);
}
