#include <stdio.h>
#include <fcntl.h>
#include "libft.h"

void test_ft_putnbr_fd(void)
{
    int fd = open("test_putnbr.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    ft_putnbr_fd(42, fd);
    ft_putchar_fd('\n', fd);
    ft_putnbr_fd(-42, fd);
    ft_putchar_fd('\n', fd);
    ft_putnbr_fd(0, fd);
    ft_putchar_fd('\n', fd);
    ft_putnbr_fd(2147483647, fd);
    ft_putchar_fd('\n', fd);
    ft_putnbr_fd(-2147483648, fd);
    ft_putchar_fd('\n', fd);
        
    printf("Check the test_putnbr.txt file created");
}