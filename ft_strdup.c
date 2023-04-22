/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:45:26 by laumoral          #+#    #+#             */
/*   Updated: 2023/03/10 23:45:37 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Creates a duplicate of a string with memory dynamically allocated
 * using malloc
 * 
 * @param s Pointer to the string to duplicate
 * 
 * @return If the allocation is successfull, a pointer to the first byte of the 
 * duplicated string. Otherwise returns NULL
 */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s) + 1;
	dup = (char *)malloc(len);
	if (!dup)
		return (NULL);
	return (ft_memcpy(dup, s, len));
}
/*
#include <stdio.h>
#include <string.h>

void test_strdup(const char *s)
{
    char *original_result = strdup(s);
    char *ft_result = ft_strdup(s);

    if (strcmp(original_result, ft_result) == 0)
    {
        printf("PASS: \"%s\"\n", s);
    }
    else
    {
        printf("FAIL: original=\"%s\", ft=\"%s\"\n", original_result, ft_result);
    }

    free(original_result);
    free(ft_result);
}

int main()
{
    test_strdup("Hello, world!");
    test_strdup("This is a test.");
    test_strdup("");
    test_strdup("A string with special characters: !@#$%^&*()");
    test_strdup("A string with Unicode characters: こんにちは世界");

    return 0;
}*/