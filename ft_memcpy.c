/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:14:42 by laumoral          #+#    #+#             */
/*   Updated: 2023/02/07 11:39:13 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Copies a block of memory from a source address to a destination adress.
 * 
 * @param dest A pointer to the destination block of memory.
 * @param src A pointer to the source block of memory.
 * @param len The number of bytes to copy
 * 
 * @return A pointer to the destination block of memory.
 */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == src || len == 0)
		return (dst);
	i = 0;
	while (i < len)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>
#include <string.h>

#define BUF_SIZE 256

/*int main()
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

    return 0;
}*/