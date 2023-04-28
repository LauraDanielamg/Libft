#include <stdio.h>
#include "libft.h"

void test_ft_strlen(void)
{
   const char *str = "Hola";
   size_t result;
   result = ft_strlen(str);
   printf("El valor es %zu.\n", result);

}