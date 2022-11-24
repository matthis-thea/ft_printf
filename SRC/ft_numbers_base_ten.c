/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers_base_ten.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:29:09 by mthea             #+#    #+#             */
/*   Updated: 2022/11/24 15:41:57 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/ft_printf.h"

int	ft_printf_nb(int n, int *verification)
{
	char	characteres;
	int		b;
	int		value_return;

	value_return = ft_count_return_nb(n);
	b = 0;
	if (n == -2147483648)
	{
		ft_printf_c('-', verification);
		n = -(n + ++b);
	}
	else if (n < 0)
	{
		ft_printf_c('-', verification);
		n = -n;
	}
	characteres = '0' + n % 10;
	n = n / 10;
	if (n != 0)
		ft_printf_nb(n, verification);
	if (b == 1)
		characteres++;
	ft_printf_c(characteres, verification);
	return (value_return);
}

int	ft_printf_nb_u(unsigned int n, int *verification)
{
	char	characteres;
	int		value_return;

	value_return = ft_count_return_nb_u(n);
	if (n < 0)
		return (0);
	characteres = '0' + n % 10;
	n = n / 10;
	if (n != 0)
		ft_printf_nb_u(n, verification);
	ft_printf_c(characteres, verification);
	return (value_return);
}
