/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nombres_base_dix.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:29:09 by mthea             #+#    #+#             */
/*   Updated: 2022/11/21 17:22:44 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// Functions for %d and %i
void	ft_aff_nb(int n)
{
	char	characteres;
	int		b;

	if (n > 2147483647 || n < -2147483648)
		return ;
	b = 0;
	if (n == -2147483648)
	{
		write(1, "-", 1);
		n = -(n + ++b);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	characteres = '0' + n % 10;
	n = n / 10;
	if (n != 0)
		ft_aff_nb(n);
	if (b == 1)
		characteres++;
	ft_aff_c(characteres);
}
// Functions for %u
void	ft_aff_nb_u(unsigned int n)
{
	char	characteres;

	if (n > 4294967295)
		return ;
	if (n < 0)
		return ;
	characteres = '0' + n % 10;
	n = n / 10;
	if (n != 0)
		ft_aff_nb(n);
	ft_aff_c(characteres);
}


