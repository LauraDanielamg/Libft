/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:40:34 by laumoral          #+#    #+#             */
/*   Updated: 2023/02/07 13:01:33 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Copies a block of memory from a source address to a destination adress
 * but handling the overlapping memory sections correctly
 * 
 * @param dest A pointer to the destination block of memory.
 * @param src A pointer to the source block of memory.
 * @param len The number of bytes to copy
 * 
 * @return A pointer to the destination block of memory.
 */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*dest;
	const unsigned char		*source;
	size_t					i;

	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (dst == src || len == 0)
		return (dst);
	if (dest > source)
	{
		while (len--)
			dest[len] = source[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dst);
}

#include <string.h>
#include <stdio.h>

/*int main(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    char *result1;
    char *result2;

    printf("Before ft_memmove: %s\n", str1);
    printf("Before memmove: %s\n", str2);

    result1 = ft_memmove(str1 + 3, str1, strlen(str1) - 2);
    result2 = memmove(str2 + 3, str2, strlen(str2) - 2);

    printf("After ft_memmove: %s\n", result1);
    printf("After memmove: %s\n", result2);

    if (strcmp(result1, result2) == 0)
        printf("The results are the same.\n");
    else
        printf("The results are different.\n");

    return 0;
}*/