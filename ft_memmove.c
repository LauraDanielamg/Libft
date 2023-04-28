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
