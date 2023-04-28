#include <stdio.h>
#include <fcntl.h>
#include "libft.h"

void test_ft_putstr_fd(void)
{
    int fd;
    char *str = "Hello, World!";

    // Open a file for writing
    fd = open("test_putstr.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

    // Write the string to the file using ft_putstr_fd
    ft_putstr_fd(str, fd);

    // Close the file descriptor
    close(fd);

    printf("Check the test_putstr.txt file created");
}