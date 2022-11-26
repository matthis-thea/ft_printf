/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_external_functions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:46:35 by mthea             #+#    #+#             */
/*   Updated: 2022/11/26 09:46:11 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/ft_printf.h"

void	ft_rev_char_tab_x(char *tab, int size, int *verification)
{
	int		i;
	char	stockage;
	int		taille;

	taille = size - 1;
	stockage = 0;
	i = 0;
	while (i < taille)
	{
		stockage = tab[i];
		tab[i] = tab[taille];
		tab[taille] = stockage;
		i++;
		taille--;
	}
	i = 0;
	while (i < size)
	{
		ft_printf_c(tab[i], verification);
		i++;
	}
}

void	ft_rev_char_tab(char *tab, int size, int *verification)
{
	int		i;
	char	stockage;
	int		taille;

	taille = size - 1;
	stockage = 0;
	i = 2;
	while (i < taille)
	{
		stockage = tab[i];
		tab[i] = tab[taille];
		tab[taille] = stockage;
		i++;
		taille--;
	}
	i = 0;
	while (i < size)
	{
		ft_printf_c(tab[i], verification);
		i++;
	}
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
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_count_return_nb_long(unsigned long long n)
{
	int	i;

	i = 1;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}
