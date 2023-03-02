/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:38:44 by laumoral          #+#    #+#             */
/*   Updated: 2023/02/07 16:49:51 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	return(0);
}

int main()
{
	char *s1 = "P";
	char *s2 = "Avis";
	size_t n = 4;

	printf("%s\n", memcmp(s1,s1,n));
	return(0);
}
