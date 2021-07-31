/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_entry.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 00:35:55 by arbernar          #+#    #+#             */
/*   Updated: 2021/07/26 00:35:56 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "skyscrapper_puzzle.h"

int	validate_entry(char *str, int *views)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (str[i] != '\0' && j < 16)
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			views[j] = str[i] - '0';
			j++;
		}
		else
			if (str[i] != ' ')
				return (1);
		i++;
	}
	if (j != 16 || str[i] != '\0')
		return (1);
	return (0);
}
