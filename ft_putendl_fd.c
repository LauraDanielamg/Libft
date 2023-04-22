/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:41:48 by laumoral          #+#    #+#             */
/*   Updated: 2023/03/11 09:41:52 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * @brief Writes the string s to the specified file descriptor, followed by 
 * a newline character
 * 
 * @param s The string to output.
 * @param fd The file descriptor to write to.
 * 
 * @return None
 */

#include "libft.h"

size_t	ft_strlen(const char *str);

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

/*#include <fcntl.h>
#include <unistd.h>

int main()
{
    // Test with stdout (file descriptor 1)
    ft_putendl_fd("Check the output.txt file created", 1);

    // Test with a file
    int fd = open("output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);

    ft_putendl_fd("This is a test.", fd);
    ft_putendl_fd("Another line in the file.", fd);

    close(fd);

    return 0;
}*/