/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:18:44 by laumoral          #+#    #+#             */
/*   Updated: 2023/02/07 16:36:43 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Searches for the first ocurrence of a specified character in a block
 * of memory
 * 
 * @param s Pointer to the block of memory to search
 * @param c Character to search for
 * @param n Number of bytes to search
 * 
 * @return A pointer to the first ocurrence of the character; otherwise will
 * return NULL
 */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		s++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    char str[] = "hello world";
    char *result1 = ft_memchr(str, 'o', strlen(str));
    char *result2 = memchr(str, 'o', strlen(str));
    if (result1 == result2)
        printf("Results match: 'o' found at position %ld\n", result1 - str);
    else
        printf("Results do not match\n");

    char str2[] = "abcdefghij";
    result1 = ft_memchr(str2, 'x', strlen(str2));
    result2 = memchr(str2, 'x', strlen(str2));
    if (result1 == result2)
        printf("Results match: 'x' not found\n");
    else
        printf("Results do not match\n");

    char str3[] = "hello\0world";
    result1 = ft_memchr(str3, '\0', strlen(str3));
    result2 = memchr(str3, '\0', strlen(str3));
    if (result1 == result2)
        printf("Results match: '\\0' found at position %ld\n", result1 - str3);
    else
        printf("Results do not match\n");

    return 0;
}*/