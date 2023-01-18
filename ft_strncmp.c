/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:21:30 by laumoral          #+#    #+#             */
/*   Updated: 2023/01/18 10:46:15 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;

	while ((i < n) && (*s1 != '\0') && (*s2 != '\0'))
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s1[i])
			return (1);
		i++;
	}
	return (0);
}

int main ()
{
    char *s1 = "Arbol";
    char *s2 = "Artesania";
    char *s3 = "Zorro";

  printf("Comparar Arbol y Artesania: %d\n", ft_strncmp(s1, s2, 2)); //Debe ser igual a 0
  printf("Comparar Arbol y Artesania: %d\n", ft_strncmp(s2, s1, 6)); // Debe ser -1
  printf("Comparar Arbol y Zorro: %d\n", ft_strncmp(s1, s3, 10)); // Debe ser -1
  printf("Comparar Zorro y Arbol: %d\n", ft_strncmp(s3, s1, 10)); // Debe ser 1
  
   return (0);
}
