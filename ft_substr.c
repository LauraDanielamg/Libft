/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:10:04 by laumoral          #+#    #+#             */
/*   Updated: 2023/03/11 09:10:34 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Allocates memory for and returns a substring of a given string.
 * 
 * @param s Pointer to the string to create a substring from. 
 * @param start The starting index of the substring in the original string.  
 * @param len The maxinum leght of the substring
 * 
 * @return If the memory allocation is successful and the substring is created, 
 * returns a pointer to the first character of the substring. Otherwise, returns
 * a NULL pointer.
 */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	strlen;

	if (s == NULL)
		return (NULL);
	strlen = ft_strlen(s);
	if (start > strlen)
	{
		str = malloc(sizeof(char));
		if (str != NULL)
			str[0] = '\0';
		return (str);
	}
	if (len > strlen - start)
		len = strlen - start;
	len++;
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, len);
	return (str);
}

#include <stdio.h>
int main()
{
    const char *test_str = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    printf("Original string: \"%s\"\n", test_str);
    char *substring = ft_substr(test_str, start, len);
    if (substring)
    {
        printf("Substring from index %u with length %zu: \"%s\"\n", start, len, substring);
        free(substring);
    }
    else
    {
        printf("Failed to extract substring.\n");
    }

    return 0;
}
