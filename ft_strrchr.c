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
/*int main()
{
	char *s = "Hola";
	int c = 'a';

	printf("%s\n", strrchr(s, c));
	printf("%s", ft_strrchr(s,c));

return (0);
}*/
