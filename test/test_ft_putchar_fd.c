#include <stdio.h>
#include <fcntl.h>
#include "libft.h"

void test_ft_putchar_fd(void)
{
	int	fd;
	char	c;

	// Open file for writing
	fd = open("test_putchar.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

	// Write character to file using ft_putchar_fd
	c = 'a';
	ft_putchar_fd(c, fd);

	// Close file
	close(fd);

    printf("Check the test_putchar.txt file created");
}