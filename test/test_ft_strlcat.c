#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_strlcat(void)
{
	char dest[13] = "Hello";
	char src[] = " World!";
	char dest1[6] = "Hello";
    char src1[] = " World!";
	char dest2[13] = "Hello";
    char src2[] = " World!";
    char dest3[6] = "Hello";
    char src3[] = " World!";
	
	printf("Expected:\n");
	printf("%lu | %s\n", strlcat(dest, src, 13), dest);
	printf("%lu | %s\n", strlcat(dest1, src1, 6), dest1);

	printf("Actual result:\n");
	printf("%lu | %s\n", ft_strlcat(dest2, src2, 13), dest2);
	printf("%lu | %s\n", ft_strlcat(dest3, src3, 6), dest3);
}