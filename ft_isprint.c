/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:03:30 by laumoral          #+#    #+#             */
/*   Updated: 2023/01/11 13:09:44 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((c >= ' ' && c <= '~'))
		return (1);
	else
		return (0);
}
/*int main(void)
{
    int c = 134121;
    int result = ft_isprint(c);
    if (result == 0)
        write(1,"FALSE", 5);
    else if (result == 1)
        write(1, "TRUE", 4);
    return (0);
}*/
