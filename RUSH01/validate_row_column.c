/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_row_column.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 00:35:34 by arbernar          #+#    #+#             */
/*   Updated: 2021/07/26 00:35:35 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapper_puzzle.h"

int	validate_column(int *m)
{
	int	i;
	int	aux;

	i = 0;
	aux = 0;
	while (i < 4)
	{
		if (m[0 + i] == m[4 + i]
			|| m[0 + i] == m[8 + i]
			|| m[0 + i] == m[12 + i])
			return (0);
		if (m[4 + i] == m[8 + i] || m[4 + i] == m[12 + i])
			return (0);
		if (m[8 + i] == m[12 + i])
			return (0);
		i++;
	}
	return (1);
}

int	validate_view_bottom_column(int *m, int *view, int posView, int posM)
{
	int	aux;
	int	maiorAtual;
	int	countHigher;
	int	i;

	aux = view[posView];
	maiorAtual = m[posM];
	countHigher = 1;
	i = posM;
	while (i >= posM - 12)
	{
		if (m[i] > maiorAtual)
		{
			maiorAtual = m[i];
			countHigher++;
		}
		i -= 4;
	}
	if (countHigher == aux)
		return (1);
	return (0);
}

int	validate_view_top_column(int *m, int *view, int posView, int posM)
{
	int	aux;
	int	maiorAtual;
	int	countHigher;
	int	i;

	aux = view[posView];
	maiorAtual = m[posM];
	countHigher = 1;
	i = posM;
	while (i <= posM + 12)
	{
		if (m[i] > maiorAtual)
		{
			maiorAtual = m[i];
			countHigher++;
		}
		i += 4;
	}
	if (countHigher == aux)
		return (1);
	return (0);
}

int	validate_view_left_row(int *m, int *view, int posView, int posM)
{
	int	aux;
	int	maiorAtual;
	int	countHigher;
	int	i;

	aux = view[posView];
	maiorAtual = m[posM];
	countHigher = 1;
	i = posM;
	while (i < posM + 4)
	{
		if (m[i] > maiorAtual)
		{
			maiorAtual = m[i];
			countHigher++;
		}
		i++;
	}
	if (countHigher == aux)
		return (1);
	return (0);
}

int	validate_view_right_row(int *m, int *view, int posView, int posM)
{
	int	aux;
	int	maiorAtual;
	int	countHigher;
	int	i;

	aux = view[posView];
	maiorAtual = m[posM];
	countHigher = 1;
	i = posM;
	while (i > posM - 4)
	{
		if (m[i] > maiorAtual)
		{
			maiorAtual = m[i];
			countHigher++;
		}
		i--;
	}
	if (countHigher == aux)
		return (1);
	return (0);
}
