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

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
		if (!*s++)
			return(NULL);
	return((char *)s);
}

int main()
{
	const char *s = "Hola";
	int c = 'a';

	printf("%s\n", strchr(s, c));
	printf("%s\n", ft_strchr(s, c));

	return(0);
}
