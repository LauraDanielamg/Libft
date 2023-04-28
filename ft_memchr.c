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
