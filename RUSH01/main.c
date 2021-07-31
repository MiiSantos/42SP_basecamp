/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 00:26:47 by gpacheco          #+#    #+#             */
/*   Updated: 2021/07/26 00:46:03 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "skyscrapper_puzzle.h"

static int	g_views[16];

static int	g_p[24][4] = {{4, 2, 3, 1}, {3, 1, 4, 2}, {3, 4, 2, 1},
				{4, 1, 3, 2}, {1, 4, 2, 3}, {1, 2, 3, 4}, {4, 3, 1, 2},
				{1, 3, 4, 2}, {2, 1, 3, 4}, {4, 1, 2, 3}, {1, 2, 4, 3},
				{3, 4, 1, 2}, {1, 3, 2, 4}, {1, 4, 3, 2}, {4, 2, 1, 3},
				{3, 2, 1, 4}, {2, 1, 4, 3}, {3, 1, 2, 4}, {2, 3, 1, 4},
				{3, 2, 4, 1}, {2, 4, 1, 3}, {2, 3, 4, 1}, {4, 3, 2, 1},
				{2, 4, 3, 1}};

int	*vector_construct(int *vet1, int *vet2, int *vet3, int *vet4)
{
	int			i;
	static int	res[16];

	i = 0;
	while (i < 4)
	{
		res[i] = vet1[i];
		res[i + 4] = vet2[i];
		res[i + 8] = vet3[i];
		res[i + 12] = vet4[i];
		i++;
	}
	return (res);
}

int	print_solution(int i, int j, int k, int l)
{
	int	*aux;

	aux = vector_construct(g_p[i], g_p[j], g_p[k], g_p[l]);
	if (validate_column(aux) && validate_view(aux, g_views))
	{
		print_matrix(aux);
		return (1);
	}
	return (0);
}

void	start_vet(int *vetor)
{
	vetor[0] = 0;
	vetor[1] = 0;
	vetor[2] = 0;
	vetor[3] = 0;
}

int	matrix_solver(void)
{
	int	i[4];

	start_vet(i);
	while (i[0] < 24)
	{
		while (i[1] < 24)
		{
			while (i[2] < 24)
			{
				while (i[3] < 24)
				{
					if (print_solution(i[0], i[1], i[2], i[3]))
						return (0);
					i[3]++;
				}
				i[3] = 0;
				i[2]++;
			}
			i[2] = 0;
			i[1]++;
		}
		i[1] = 0;
		i[0]++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	matrix[16];
	int	entry;

	if (argc == 2)
	{
		entry = validate_entry(argv[1], g_views);
		if (entry == 0)
		{
			matrix_start(matrix);
			if (matrix_solver())
				write(1, "Error\n", 6);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
