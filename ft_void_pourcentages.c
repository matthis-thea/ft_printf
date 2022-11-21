/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void_pourcentages.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:29:37 by mthea             #+#    #+#             */
/*   Updated: 2022/11/21 17:28:00 by mthea            ###   ########.fr       */
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
// Functions for %p
void	ft_putnbr_base(void *nb, char *base)
{
	unsigned long int	resultat;
	unsigned long int 	nbr;
	char				*str;
	int					i;

	i = 0;
	str = (char *) malloc(sizeof(char) * 13);
	if (str == NULL)
		return ;
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
}
// Functions for %%
void	ft_aff_p(char c)
{
	ft_aff_c(c);
}
