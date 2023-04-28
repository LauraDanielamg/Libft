#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_strlcpy(void)
{
	char src[] = "12345";
	char dst[] = "Hello";
	char src1[] = "12345";
    char dst1[] = "Hello";

	printf("Expected: \n");
	printf("%zu | %s\n", strlcpy(dst, src, 6), dst);
	printf("Actual Result: \n");
    printf("%zu | %s\n", ft_strlcpy(dst1, src1, 6), dst1);
}