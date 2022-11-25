/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers_base_sixteen.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:29:27 by mthea             #+#    #+#             */
/*   Updated: 2022/11/25 15:25:15 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/ft_printf.h"
// Functions for %x and %X
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
