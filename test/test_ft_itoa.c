#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_itoa(void)
{
    int num1 = 12345;
    int num2 = -6789;
    int num3 = 0;
    char *str1, *str2, *str3;

    str1 = ft_itoa(num1);
    str2 = ft_itoa(num2);
    str3 = ft_itoa(num3);

    printf("Number: %d, String: %s\n", num1, str1);
    printf("Number: %d, String: %s\n", num2, str2);
    printf("Number: %d, String: %s\n", num3, str3);

    free(str1);
    free(str2);
    free(str3);
}