/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nombres_base_seize.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:29:27 by mthea             #+#    #+#             */
/*   Updated: 2022/11/21 17:54:09 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// Functions for %x and %X
int	ft_aff_nb_x(int nbr, char *base)
{
	int				i;
	unsigned int	resultat;
	unsigned int	nombres;

	i = 0;
	resultat = 0;
	if (nbr > 2147483647 || nbr < -2147483648)
		return (0);
	if (nbr < 0)
	{
		ft_aff_c('-');
		nombres = -nbr;
	}
	else
		nombres = nbr;
	resultat = nombres % 16;
	nombres = nombres / 16;
	if (nombres != 0)
		ft_aff_nb_x(nombres, base);
	ft_aff_c(base[resultat]);
	return (ft_compte_nb(nbr));
}