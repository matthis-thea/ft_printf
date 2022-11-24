/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers_base_sixteen.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:29:27 by mthea             #+#    #+#             */
/*   Updated: 2022/11/24 15:41:34 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/ft_printf.h"
// Functions for %x and %X
int	ft_printf_nb_x(unsigned int nbr, char *base, int *verification)
{
	int				i;
	unsigned int	resultat;
	char			*str;
	int				return_value;

	return_value = ft_count_return_nb_u(nbr);
	i = 0;
	resultat = 0;
	str = (char *) malloc(sizeof(char) * 13);
	if (!str)
		return (-1);
	while (nbr > 0)
	{
		resultat = nbr % 16;
		nbr = nbr / 16;
		str[i++] = base[resultat];
	}
	str[++i] = 0;
	ft_rev_char_tab(str, i, verification);
	free(str);
	return (return_value);
}
