#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_strrchr(void)
{
	char *s = "Hola";
	int c = 'a';

	printf("%s\n", strrchr(s, c));
	printf("%s", ft_strrchr(s,c));
}
