/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:01:40 by laumoral          #+#    #+#             */
/*   Updated: 2023/01/11 16:06:18 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t i = 0;
   
	while (str[i] != '\0')
		i++;
	return (i);
}
/*#include <stdio.h>
int main(void)
{
   const char *str = "Hola";
   size_t result;
   result = ft_strlen(str);
   printf("El valor es %zu.\n", result);
   return (0);
}*/
