#include <stdio.h>
#include <ctype.h>
#include "libft.h"

void test_ft_tolower(void)
{
	int a = 'B';
	
	int A = tolower(a);

	write(1, &A, 1);
}