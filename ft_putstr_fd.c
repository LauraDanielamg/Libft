/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:39:32 by laumoral          #+#    #+#             */
/*   Updated: 2023/03/11 09:39:55 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Writes the string s to the specified file descriptor fd.
 * 
 * @param s The string to write.
 * @param fd The file descriptor to write to.
 * 
 * @return None
 */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	write(fd, s, len);
}
/*
#include <fcntl.h>

int main(void)
{
    int fd;
    char *str = "Hello, World!";

    // Open a file for writing
    fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

    // Write the string to the file using ft_putstr_fd
    ft_putstr_fd(str, fd);

    // Close the file descriptor
    close(fd);

    return 0;
}*/