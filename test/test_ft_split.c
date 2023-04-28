#include <stdio.h>
#include <string.h>
#include "libft.h"

// Function to print the output of ft_split
void print_split_result(char **split_result)
{
    int i = 0;
    while (split_result[i] != NULL)
    {
        printf("%s\n", split_result[i]);
        i++;
    }
}

void test_ft_split(void)
{
    char const *test_string = "This is a test string for the ft_split function.";
    char delimiter = ' ';

    printf("Input string: '%s'\n", test_string);
    printf("Delimiter: '%c'\n", delimiter);

    char **result = ft_split(test_string, delimiter);

    printf("Result:\n");
    print_split_result(result);
}