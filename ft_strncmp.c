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
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}

int main ()
{
    char *s1 = "Bed";
    char *s2 = "Bedroom";
    char *s3 = "Door";
    char *s4 = "";
    char *s5 = "Incomprehensibilities";

  printf("TEST 1:\n");
  printf("EXPECTED: Bed VS Bedroom, first 3 letters: \n%i\n", strncmp(s1, s2, 3));
  printf("ACTUAL RESULT:\n%i\n\n", ft_strncmp(s1, s2, 3));
  printf("TEST 2:\n");
  printf("EXPECTED: Bed VS Bedroom, all letters:\n%d\n", strncmp(s1, s2, 7));
  printf("ACTUAL RESULT:\n %d\n\n", ft_strncmp(s1, s2, 7));
  printf("TEST 3:\n");
  printf("EXPECTED: Bed VS Door: \n %d\n", strncmp(s1, s3, 10));
  printf("ACTUAL RESULT: \n %d\n\n", ft_strncmp(s1, s3, 10));
  printf("TEST 4:\n");
  printf("EXPECTED: Door VS Bed: \n %d\n", strncmp(s3, s1, 10));
  printf("ACTUAL RESULT: \n %d\n\n", ft_strncmp(s3, s1, 10));
  printf("TEST 5:\n");
  printf("EXPECTED: "" VS Incomprehensibilities: \n %d\n", strncmp(s4, s5, 10));
  printf("ACTUAL RESULT: \n %d\n\n", ft_strncmp(s4, s5, 10));
	return (0);
}
