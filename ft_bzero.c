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

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char *p;

	p = s;

	while(n > 0)
	{
		*p = '\0';
		n--;
		p++;
	}
}
/*int main()
{
	char s[10];
	char t[10];
	size_t len = 5;

	bzero(s, len);
	ft_bzero(t, len);
	printf("%s", t);

	return (0);
}*/