/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 17:48:35 by mandress          #+#    #+#             */
/*   Updated: 2021/07/30 18:11:12 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		num = 147483647;
	}
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num < 10)
	{
		ft_putchar(num + 48);
		return ;
	}
	else
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
}
