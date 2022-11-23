/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers_base_sixteen.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:29:27 by mthea             #+#    #+#             */
/*   Updated: 2022/11/23 16:48:22 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/ft_printf.h"
// Functions for %x and %X
int	ft_aff_nb_x(int nbr, char *base)
{
	int				i;
	unsigned int	resultat;
	unsigned int	nombres;
	char			*str;

	i = 0;
	resultat = 0;
	str = (char *) malloc(sizeof(char) * 13);
	if (str == 0 || nbr > 2147483647 || nbr < -2147483648)
		return (-1);
	if (nbr < 0)
	{
		ft_aff_c('-');
		nombres = -nbr;
	}
	while (nbr > 0)
	{
		resultat = nbr % 16;
		nbr = nbr / 16;
		str[i++] = base[resultat];
	}
	ft_tri(str);
	str[i] = 0;
	return (ft_compte_nb_u(nbr));
}
