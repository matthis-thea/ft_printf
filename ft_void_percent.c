/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void_percent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:29:37 by mthea             #+#    #+#             */
/*   Updated: 2022/11/22 10:54:50 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// Functions for %p
int	ft_putnbr_base(void *nb, char *base)
{
	unsigned long int	resultat;
	unsigned long int 	nbr;
	char				*str;
	int					i;

	i = 0;
	str = (char *) malloc(sizeof(char) * 13);
	if (str == 0)
		return (0);
	nbr = (unsigned long int) nb;
	while (nbr > 0)
	{
		resultat = 0;
		resultat = nbr % 16;
		nbr = nbr / 16;
		str[i] = base[resultat];
		i++;
	}
	ft_aff_c('0');
	ft_aff_c('x');
	str[12] = 0;
	ft_tri(str);
	return (ft_compte_nb_u(nbr) + 2);
}
// Functions for %%
int	ft_aff_p(char c)
{
	ft_aff_c(c);
	return (1);
}
