/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:30:18 by laumoral          #+#    #+#             */
/*   Updated: 2023/03/11 09:30:24 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Applies a function to each character of a string and creates a new
 * string with the results.
 * 
 * @param s The string to iterate over.
 * @param f The function to apply to each character.
 * 
 * @return A new string created after applying the function f to each character 
 * of the original string. Returns NULL if the memory allocation fails.
 */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	if (!s || !f)
		return (NULL);
	result = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}

#include <stdio.h>
char ft_custom_function(unsigned int i, char c)
{
    // Modify the character, for example, by increasing its ASCII value by 1
    return c + 1;
}

int main()
{
    const char *test_str = "Hello, World!";

    printf("Original string: %s\n", test_str);
    char *modified_str = ft_strmapi(test_str, ft_custom_function);
    if (modified_str)
    {
        printf("Modified string: %s\n", modified_str);
        free(modified_str);
    }
    else
    {
        printf("Failed to modify string.\n");
    }

    return 0;
}