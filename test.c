/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:07:10 by haze              #+#    #+#             */
/*   Updated: 2022/11/25 15:25:04 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	ft_printf_c(char c, int *verification)
{
	int	number;

	number = 1 ;
	if (*verification != -1)
		number = write(1, &c, 1);
	if (number == -1)
		*verification = -1;
	return (number);
}
void	ft_rev_char_tab_x_X(char *tab, int size, int *verification)
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

int	ft_printf_nb_x(unsigned int nbr, char *base, int *verification)
{
	unsigned int		resultat;
	char				*str;
	int					i;

	i = 0;
	str = NULL;
	str = (char *) malloc(sizeof(char) * 15);
	if (!str)
		return (-1);
	while (nbr > 0)
	{
		resultat = 0;
		resultat = nbr % 16;
		nbr = nbr / 16;
		str[i] = base[resultat];
		i++;
	}
	str[i] = 0;
	ft_rev_char_tab_x_X(str, i, verification);
	free(str);
	return (i);
}