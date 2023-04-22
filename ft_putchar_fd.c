/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:35:30 by laumoral          #+#    #+#             */
/*   Updated: 2023/03/11 09:36:21 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Outputs a character to the specified file descriptor.
 * 
 * @param c The character to output.
 * @param fd The file descriptor to write to.
 * 
 * @return None
 */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int	fd;
	char	c;

	// Open file for writing
	fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

	// Write character to file using ft_putchar_fd
	c = 'a';
	ft_putchar_fd(c, fd);

	// Close file
	close(fd);

	return (0);
}*/