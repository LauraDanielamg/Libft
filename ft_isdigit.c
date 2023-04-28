/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:01:41 by laumoral          #+#    #+#             */
/*   Updated: 2023/01/11 12:44:49 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Checks if an integer is a number/digit in the ascii table.
 * 
 * @param n integer to check.
 * @return 1 if True, 0 if False.
 */

int	ft_isdigit(int n)
{
	if ((n >= '0' && n <= '9' ))
		return (1);
	else
		return (0);
}
