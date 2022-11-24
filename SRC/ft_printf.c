/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:02:06 by mthea             #+#    #+#             */
/*   Updated: 2022/11/24 15:48:20 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/ft_printf.h"

int	ft_print_value(va_list parametres, char str, int *verification)
{
	int		value;

	value = 0;
	if (str == 'c')
		value = ft_printf_c(va_arg(parametres, int), verification);
	else if (str == 's')
		value = ft_printf_s(va_arg(parametres, char *), verification);
	else if (str == 'p')
		value = ft_printf_void(va_arg(parametres, unsigned long long), "0123456789ABCDEF",verification);
	else if ((str == 'd') || (str = 'i'))
		value = ft_printf_nb(va_arg(parametres, int), verification);
	else if (str == 'u')
		value = ft_printf_nb_u(va_arg(parametres, unsigned int), verification);
	else if (str == 'x')
		value = ft_printf_nb_x(va_arg(parametres, unsigned int), "0123456789abcdef", verification);
	else if (str == 'X')
		value = ft_printf_nb_x(va_arg(parametres, unsigned int), "0123456789ABCDEF", verification);
	else if (str == '%')
		value = ft_printf_pourcentage('%', verification);
	else
		return (-1);
	return (value);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		value;
	va_list	parametres;
	int		verification;

	i = 0;
	value = 0;
	verification = 0;
	va_start(parametres, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			value += ft_print_value(parametres, str[i], &verification);
		}
		else
			value += ft_printf_c(str[i], &verification);
		i++;
	}
	if (verification == - 1)
	{
		va_end(parametres);
		return (-1);
	}
	va_end(parametres);
	return (value);
}
