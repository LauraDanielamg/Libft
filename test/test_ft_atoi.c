#include <stdio.h>
#include "libft.h"

void test_ft_atoi(void)
{
    char *str = "123";
    int expected = atoi(str);
    int actual = ft_atoi(str);

    printf("String: \"%s\"\n", str);
    printf("Expected: %d\n", expected);
    printf("Actual: %d\n", actual);
    printf("ft_atoi matches atoi: %s\n", expected == actual ? "true" : "false");

    str = "-456";
    expected = atoi(str);
    actual = ft_atoi(str);

    printf("String: \"%s\"\n", str);
    printf("Expected: %d\n", expected);
    printf("Actual: %d\n", actual);
    printf("ft_atoi matches atoi: %s\n", expected == actual ? "true" : "false");

    str = "2147483647";
    expected = atoi(str);
    actual = ft_atoi(str);

    printf("String: \"%s\"\n", str);
    printf("Expected: %d\n", expected);
    printf("Actual: %d\n", actual);
    printf("ft_atoi matches atoi: %s\n", expected == actual ? "true" : "false");


    str = "-2147483648";
    expected = atoi(str);
    actual = ft_atoi(str);

    printf("String: \"%s\"\n", str);
    printf("Expected: %d\n", expected);
    printf("Actual: %d\n", actual);
    printf("ft_atoi matches atoi: %s\n", expected == actual ? "true" : "false");

    str = "not an integer";
    expected = atoi(str);
    actual = ft_atoi(str);

    printf("String: \"%s\"\n", str);
    printf("Expected: %d\n", expected);
    printf("Actual: %d\n", actual);
    printf("ft_atoi matches atoi: %s\n", expected == actual ? "true" : "false");

	str = "";
    expected = atoi(str);
    actual = ft_atoi(str);

    printf("String: \"%s\"\n", str);
    printf("Expected: %d\n", expected);
    printf("Actual: %d\n", actual);
    printf("ft_atoi matches atoi: %s\n", expected == actual ? "true" : "false");

}
