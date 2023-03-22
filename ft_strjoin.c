/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:16:22 by laumoral          #+#    #+#             */
/*   Updated: 2023/03/11 09:16:25 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len1;
	size_t	len2;
	size_t	i;

	len1 = 0;
	len2 = 0;
	i = 0;
	if (s1 != NULL)
		len1 = ft_strlen(s1);
	if (s2 != NULL)
		len2 = ft_strlen(s2);
	new_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (*s1 != '\0')
		{
			new_str[i++] = *s1;
			s1++;
		}
	}
	if (s2 != NULL)
	{
		while (*s2 != '\0')
		{
			new_str[i++] = *s2;
			s2++;
		}
	}
	new_str[i] = '\0';
	return (new_str);
}
