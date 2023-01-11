/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:40:14 by laumoral          #+#    #+#             */
/*   Updated: 2023/01/11 11:04:10 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*int main(void)
{
    int c = 121;
    int result = ft_isalpha(c);

    if (result == 0)
        write(1,"FALSE", 5);
    else if (result == 1)
        write(1, "TRUE", 4);
    return (0);
}*/
