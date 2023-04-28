#include <stdio.h>
#include <fcntl.h>
#include "libft.h"

void test_ft_putenl_fd(void)
{
    // Test with stdout (file descriptor 1)
    ft_putendl_fd("Check the output.txt file created", 1);

    // Test with a file
    int fd = open("output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);

    ft_putendl_fd("This is a test.", fd);
    ft_putendl_fd("Another line in the file.", fd);

    close(fd);
}