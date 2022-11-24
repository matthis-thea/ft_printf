/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void_percent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:29:37 by mthea             #+#    #+#             */
/*   Updated: 2022/11/24 15:42:37 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/ft_printf.h"

int	ft_printf_void(unsigned long long nb, char *base, int *verification)
{
	unsigned int		resultat;
	char				*str;
	int					i;
	int					return_value;

	i = 0;
	str = (char *) malloc(sizeof(char) * 13);
	if (!str)
		return (-1);
	return_value = ft_count_return_nb_u(nb) + 2;
	while (nb > 0)
	{
		resultat = 0;
		resultat = nb % 16;
		nb = nb / 16;
		str[i] = base[resultat];
		i++;
	}
	ft_printf_s("0x", verification);
	str[++i] = 0;
	ft_rev_char_tab(str, i, verification);
	free(str);
	return (return_value);
}

int	ft_printf_pourcentage(char c, int *verification)
{
	ft_printf_c(c, verification);
	return (1);
}
