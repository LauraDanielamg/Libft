/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:38:31 by laumoral          #+#    #+#             */
/*   Updated: 2023/03/10 23:38:34 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Allocates a block of memory for an array of elements and initializes
 * all bytes in the block to zero.
 * 
 * @param nmemb Number of elements to allocate memory for.
 * @param size Size in bytes of each elements
 * 
 * @return If the allocation is successfull, a pointer to the first byte of the 
 * allocated block of memory. Otherwise, will return NULL.
 */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len);

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
