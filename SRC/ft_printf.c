/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:02:06 by mthea             #+#    #+#             */
/*   Updated: 2022/11/25 15:31:44 by haze             ###   ########.fr       */
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
		value = ft_printf_c('%', verification);
	else
		return (-1);
	return (value);
}

int	ft_printf(const char *str, ...)
{
	va_list parametres;
	int		i;
	int		value;

	i = 0;
	value = 0;
	va_start(parametres, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
		}
	}
	

}
