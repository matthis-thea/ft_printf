/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void_percent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:29:37 by mthea             #+#    #+#             */
/*   Updated: 2022/11/26 11:49:20 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_void(unsigned long long nb, int *verification)
{
	unsigned int		resultat;
	char				*str;
	int					i;
	char				*base;

	base = "0123456789abcdef";
	i = 2;
	str = NULL;
	if (nb == 0)
		return (-1);
	str = (char *) malloc(sizeof(char) * ft_count_return_nb_long(nb + 1));
	if (!str)
		return (-1);
	str[0] = '0';
	str[1] = 'x';
	while (nb > 0)
	{
		resultat = 0;
		resultat = nb % 16;
		nb = nb / 16;
		str[i] = base[resultat];
		i++;
	}
	str[i] = 0;
	ft_rev_char_tab(str, i, verification);
	free(str);
	return (i);
}
