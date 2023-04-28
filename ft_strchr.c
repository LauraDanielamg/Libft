/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:19:27 by laumoral          #+#    #+#             */
/*   Updated: 2023/02/07 16:27:59 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Finds the first ocurrence of a character in a string.
 * 
 * @param s A pointer to the string to be searched
 * @param c The character to search for. 
 * 
 * @return A pointer to the first ocurrence of the character in the string;
 * or NULL if the character is not found.
 */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
		if (!*s++)
			return (NULL);
	return ((char *)s);
}
