/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chaines_caracteres.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:49:28 by mthea             #+#    #+#             */
/*   Updated: 2022/11/21 17:55:45 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "unistd.h"

// Functions for %c
int	ft_aff_c(char c)
{
	write(1, &c, 1);
	return (1);
}

// fonctions for %s
int	ft_aff_s(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		ft_aff_c(s[i]);
		i++;
	}
	return (i);
}
