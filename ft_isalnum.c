/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:35:11 by laumoral          #+#    #+#             */
/*   Updated: 2023/01/11 12:47:59 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/*int main(void)
{
    int c = 102;
    int result = ft_isalnum(c);
    if (result == 0)
        write(1,"FALSE", 5);
    else if (result == 1)
        write(1, "TRUE", 4);
    return (0);
}*/
