/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_external_functions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:46:35 by mthea             #+#    #+#             */
/*   Updated: 2022/11/21 17:48:39 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// External Functions
int ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void	ft_tri(char *tab)
{
	int	j;

	j = ft_strlen(tab) - 1;
	while (j >= 0)
	{
		ft_aff_c(tab[j]);
		j--;
	}
}

int		ft_compte_nb(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int		ft_compte_nb_u(unsigned int n)
{
	int	i;

	i = 1;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}