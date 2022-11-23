/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_letters.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:49:28 by mthea             #+#    #+#             */
/*   Updated: 2022/11/23 16:58:15 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/ft_printf.h"

// Functions for %c
int	ft_aff_c(char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

// fonctions for %s
int	ft_aff_s(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (-1);
	while (s[i])
	{
		if (ft_aff_c(s[i] == -1))
			return (-1);
		i++;
	}
	return (i);
}
