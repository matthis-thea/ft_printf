/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers_base_ten.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:29:09 by mthea             #+#    #+#             */
/*   Updated: 2022/11/23 16:39:34 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/ft_printf.h"

int	ft_aff_nb(int n)
{
	char	characteres;
	int		b;

	if (n > 2147483647 || n < -2147483648)
		return (-1);
	b = 0;
	if (n == -2147483648)
	{
		ft_aff_c('-');
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
	return (ft_compte_nb(n));
}

int	ft_aff_nb_u(unsigned int n)
{
	char	characteres;

	if (n > 4294967295)
		return (-1);
	if (n < 0)
		return (0);
	characteres = '0' + n % 10;
	n = n / 10;
	if (n != 0)
		ft_aff_nb(n);
	ft_aff_c(characteres);
	return (ft_compte_nb_u(n));
}
