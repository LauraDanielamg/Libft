/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:19:27 by laumoral          #+#    #+#             */
/*   Updated: 2023/02/07 16:27:59 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Finds the first ocurrence of a character in a string.
 * 
 * @param s A pointer to the string to be searched
 * @param c The character to search for. 
 * 
 * @return A pointer to the first ocurrence of the character in the string;
 * or NULL if the character is not found.
 */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
		if (!*s++)
			return (NULL);
	return ((char *)s);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    const char *test_string = "Hello, world!";
    int test_char = 'o';
    char *result_ft, *result_orig;

    // Test 1: Character is present in the string
    result_ft = ft_strchr(test_string, test_char);
    result_orig = strchr(test_string, test_char);
    if (result_ft == result_orig)
        printf("Test 1: Both functions found '%c' at position %ld\n", test_char, result_ft - test_string);
    else
        printf("Test 1: Mismatch between ft_strchr and strchr results\n");

    // Test 2: Character is not present in the string
    test_char = 'x';
    result_ft = ft_strchr(test_string, test_char);
    result_orig = strchr(test_string, test_char);
    if (result_ft == result_orig)
        printf("Test 2: Both functions did not find character '%c'\n", test_char);
    else
        printf("Test 2: Mismatch between ft_strchr and strchr results\n");

    // Test 3: Character is at the beginning of the string
    test_char = 'H';
    result_ft = ft_strchr(test_string, test_char);
    result_orig = strchr(test_string, test_char);
    if (result_ft == result_orig)
        printf("Test 3: Both functions found '%c' at position %ld\n", test_char, result_ft - test_string);
    else
        printf("Test 3: Mismatch between ft_strchr and strchr results\n");

    // Test 4: Character is at the end of the string
    test_char = '!';
    result_ft = ft_strchr(test_string, test_char);
    result_orig = strchr(test_string, test_char);
    if (result_ft == result_orig)
        printf("Test 4: Both functions found '%c' at position %ld\n", test_char, result_ft - test_string);
    else
        printf("Test 4: Mismatch between ft_strchr and strchr results\n");

    return 0;
}
*/