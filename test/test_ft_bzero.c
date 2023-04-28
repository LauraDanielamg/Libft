#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_bzero(void)
{
	char s[10];
	char t[10];
	size_t len = 5;

	bzero(s, len);
	ft_bzero(t, len);
	printf("Expected: %s\n", s);
	printf("Actuall: %s\n", t);
}