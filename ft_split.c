/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:11:48 by laumoral          #+#    #+#             */
/*   Updated: 2023/03/12 11:12:07 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_split(char **arr)
{
	size_t	i;

	if (arr == NULL)
		return (NULL);
	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static size_t	count_elements(char const *s, char c)
{
	size_t	i;
	size_t	count;

	if (s == NULL)
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	**init_split(char const *s, char c)
{
	char	**arr;
	size_t	len;

	if (s == NULL)
		return (NULL);
	len = count_elements(s, c);
	arr = malloc(sizeof(char *) * (len + 1));
	if (arr == NULL)
		return (NULL);
	arr[len] = NULL;
	return (arr);
}

/**
 * @brief This function splits a string into an array of substrings based
 *  on a delimiter character.
 * 
 * @param s: The string to split.
 * @param c: The delimiter character.
 * 
 * @return The resulting array of new strings.
 * NULL if the memory allocation fails.
 */
char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	index;
	size_t	i;
	size_t	start;

	arr = init_split(s, c);
	if (arr == NULL)
		return (NULL);
	index = 0;
	i = 0;
	start = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		arr[index++] = ft_substr(s, start, i - start);
		if (arr[index - 1] == NULL)
			return (free_split(arr));
	}
	return (arr);
}

/*#include <stdio.h>

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

int main(void)
{
    char const *test_string = "This is a test string for the ft_split function.";
    char delimiter = ' ';

    printf("Input string: '%s'\n", test_string);
    printf("Delimiter: '%c'\n", delimiter);

    char **result = ft_split(test_string, delimiter);

    printf("Result:\n");
    print_split_result(result);

    return 0;
}*/