/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:01:41 by laumoral          #+#    #+#             */
/*   Updated: 2023/01/11 12:44:49 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int n)
{
	if ((n >= '0' && n <= '9' ))
		return (1);
	else
		return (0);
}
/*int main(void)
{
    int n = '2';
    int result = ft_isdigit(n);
    if (result == 0)
        write(1,"FALSE", 5);
    else if (result == 1)
        write(1, "TRUE", 4);
    return (0);
}*/
