/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:01:14 by laumoral          #+#    #+#             */
/*   Updated: 2023/01/17 12:18:27 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Converts a lowercase letter to its corresponding uppercase letter
 * 
 * @param c the character to be converted
 * 
 * @return The corresponding uppercase letter if c is a lowercase letter;
 * otherwise, the original character.
 */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
