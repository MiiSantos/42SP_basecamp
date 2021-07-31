/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 22:08:57 by mandress          #+#    #+#             */
/*   Updated: 2021/07/30 22:14:35 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	positive;
	int	nb;

	i = 0;
	positive = 1;
	nb = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			positive = -positive;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (str[i] - '0') + (nb * 10);
		i++;
	}
	return (positive * nb);
}
