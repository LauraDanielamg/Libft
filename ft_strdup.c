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
