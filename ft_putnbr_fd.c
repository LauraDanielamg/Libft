/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:44:57 by laumoral          #+#    #+#             */
/*   Updated: 2023/03/11 09:45:02 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Writes an integer to a file descriptor
 * 
 * @param n The integer to be written.
 * @param fd The file descriptor to write to.
 * 
 * @return None
 */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	digit;
	long	nn;

	nn = n;
	if (nn < 0)
	{
		ft_putchar_fd('-', fd);
		nn = -nn;
	}
	if (nn >= 10)
		ft_putnbr_fd(nn / 10, fd);
	digit = nn % 10 + '0';
	ft_putchar_fd(digit, fd);
}
