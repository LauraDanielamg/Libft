#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_calloc(void)
{   
	int* array1 = (int*)ft_calloc(5, sizeof(int));
    int* array2 = (int*)calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        array1[i] = 0;
        array2[i] = 0;
    }

    printf("Array 1: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\n");

    printf("Array 2: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array2[i]);
    }
    printf("\n");

    free(array2);
    free(array1);
}