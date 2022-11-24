/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_external_functions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:46:35 by mthea             #+#    #+#             */
/*   Updated: 2022/11/24 15:41:19 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (-1);
	while (str[i])
		i++;
	return (i);
}

void	ft_rev_char_tab(char *tab, int size, int *verification)
{
	int		i;
	int		stockage_d;
	int		taille;

	i = 0;
	stockage_d = 0;
	taille = size - 1;
	while (i < taille)
	{
		stockage_d = tab[taille];
		tab[taille] = tab[i];
		tab[i] = stockage_d;
		i++;
		taille--;
	}
	i = 0;
	while (tab[i])
	{
		ft_printf_c(tab[i], verification);
		i++;
	}
	ft_printf_c(tab[i], verification);
}

int	ft_count_return_nb(int n)
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

int	ft_count_return_nb_u(unsigned int n)
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
