/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:04:47 by laumoral          #+#    #+#             */
/*   Updated: 2023/02/07 16:14:30 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Finds the last ocurrence of a character in a string.
 * 
 * @param s A pointer to the string to be searched
 * @param c The character to search for. 
 * 
 * @return A pointer to the last ocurrence of the character in the string;
 * or NULL if the character is not found.
 */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ss;

	ss = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ss = (char *)s;
		s++;
	}
	if (*s == (char) c)
		return ((char *)s);
	return (ss);
}
