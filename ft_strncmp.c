/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:21:30 by laumoral          #+#    #+#             */
/*   Updated: 2023/01/18 10:46:15 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Compares two strings up to a specified number of characters.
 * 
 * @param s1 A pointer to the first string to be compared.
 * @param s2 A pointer to the second string to be compared.
 * @param n the maximun number of characters to compare.
 * 
 * @return An integer value indicanting the relationship between the strings.
 * 
 */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n && (s1[i] || s2[i]))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

#include <stdio.h>

int main()
{
    const char *test_strings[][2] = {
        {"Hello, World!", "Hello, World!"},
        {"Hello, World!", "Hello, world!"},
        {"Hello, World!", "Hello, Worl"},
        {"abc", "abcde"},
        {"", ""}
    };
    size_t test_cases = sizeof(test_strings) / sizeof(test_strings[0]);

    for (size_t i = 0; i < test_cases; i++)
    {
        int result = ft_strncmp(test_strings[i][0], test_strings[i][1], 20);
        printf("Comparing \"%s\" and \"%s\": %d\n", test_strings[i][0], test_strings[i][1], result);
    }

    return 0;
}