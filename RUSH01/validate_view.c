/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_view.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 00:35:25 by arbernar          #+#    #+#             */
/*   Updated: 2021/07/26 00:35:26 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapper_puzzle.h"

int	validate_view_left(int *m, int *view)
{
	if (
		validate_view_left_row(m, view, 8, 0)
		&& validate_view_left_row(m, view, 9, 4)
		&& validate_view_left_row(m, view, 10, 8)
		&& validate_view_left_row(m, view, 11, 12)
	)
		return (1);
	return (0);
}

int	validate_view_right(int *m, int *view)
{
	if (
		validate_view_right_row(m, view, 12, 3)
		&& validate_view_right_row(m, view, 13, 7)
		&& validate_view_right_row(m, view, 14, 11)
		&& validate_view_right_row(m, view, 15, 15)
	)
		return (1);
	return (0);
}

int	validate_view_top(int *m, int *view)
{
	if (
		validate_view_top_column(m, view, 0, 0)
		&& validate_view_top_column(m, view, 1, 1)
		&& validate_view_top_column(m, view, 2, 2)
		&& validate_view_top_column(m, view, 3, 3)
	)
		return (1);
	return (0);
}

int	validate_view_bottom(int *m, int *view)
{
	if (
		validate_view_bottom_column(m, view, 4, 12)
		&& validate_view_bottom_column(m, view, 5, 13)
		&& validate_view_bottom_column(m, view, 6, 14)
		&& validate_view_bottom_column(m, view, 7, 15)
	)
		return (1);
	return (0);
}

int	validate_view(int *m, int *view)
{
	if (
		validate_view_left(m, view)
		&& validate_view_right(m, view)
		&& validate_view_top(m, view)
		&& validate_view_bottom(m, view)
	)
		return (1);
	return (0);
}
