/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:29:50 by laumoral          #+#    #+#             */
/*   Updated: 2023/01/17 12:37:00 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Converts a uppercase letter to its corresponding lowercase letter
 * 
 * @param c the character to be converted
 * 
 * @return The corresponding lowercase letter if c is a uppercase letter;
 * otherwise, the original character.
 */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*int main()
{
	int a = 'B';
	
	int A = tolower(a);

	write(1, &A, 1);
	return (0);
}*/
