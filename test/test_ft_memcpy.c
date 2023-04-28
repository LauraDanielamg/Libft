#include <stdio.h>
#include <string.h>
#include "libft.h"
#define BUF_SIZE 256

void test_ft_memcpy(void)
{
    char src[BUF_SIZE] = "This is a test string";
    char dest1[BUF_SIZE];
    char dest2[BUF_SIZE];

    memcpy(dest1, src, strlen(src) + 1);

    ft_memcpy(dest2, src, strlen(src) + 1);

    if (memcmp(dest1, dest2, BUF_SIZE) == 0) {
        printf("Both memcpy and ft_memcpy produced the same result.\n");
    } else {
        printf("memcpy and ft_memcpy produced different results.\n");
    }
}