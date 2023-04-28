/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:55:28 by laumoral          #+#    #+#             */
/*   Updated: 2023/02/07 11:02:51 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Sets a block of memory with zeroes
 * 
 * @param b block of memory.
 * @param len leght of block.
 */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	unsigned char	*p;

	p = b;
	while (len > 0)
	{
		*p = '\0';
		len--;
		p++;
	}
}
