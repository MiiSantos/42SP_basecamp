/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 13:57:53 by mandress          #+#    #+#             */
/*   Updated: 2021/07/30 15:57:30 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	char			aux;

	i = 0;
	aux = 0;
	while ((n > i) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		aux = (s1[i] - s2[i]);
		if (s1[i] != s2[i])
			return (aux);
		i++;
	}
	return (aux);
}
