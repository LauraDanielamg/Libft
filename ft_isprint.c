/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:03:30 by laumoral          #+#    #+#             */
/*   Updated: 2023/01/11 13:09:44 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Checks if a integer printable according to the ascii table.
 * 
 * @param c integer to check.
 * @return 1 if True, 0 if False.
 */

int	ft_isprint(int c)
{
	if ((c >= ' ' && c <= '~'))
		return (1);
	else
		return (0);
}
