/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 15:48:23 by mandress          #+#    #+#             */
/*   Updated: 2021/07/27 19:23:29 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	aux = 0;
	while (i < size / 2)
	{
		aux = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = aux;
		i++;
	}
}
