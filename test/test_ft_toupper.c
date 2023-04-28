#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_toupper(void)
{
	int c = '*';
	
	int a = toupper(c);
	write(1, &a, 1);
}
