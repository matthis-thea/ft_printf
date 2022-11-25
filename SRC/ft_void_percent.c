/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void_percent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:29:37 by mthea             #+#    #+#             */
/*   Updated: 2022/11/25 15:12:57 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/ft_printf.h"

int	ft_printf_void(unsigned long long nb, char *base, int *verification)
{
	unsigned int		resultat;
	char				*str;
	int					i;

	i = 2;
	str = NULL;
	str = (char *) malloc(sizeof(char) * 15);
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