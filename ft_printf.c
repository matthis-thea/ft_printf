/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:02:06 by mthea             #+#    #+#             */
/*   Updated: 2022/11/26 11:44:49 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_value(va_list args, char str, int *verification)
{
	int	value;

	value = 0;
	if (str == 'c')
		value = ft_printf_c(va_arg(args, int), verification);
	else if (str == 's')
		value = ft_printf_s(va_arg(args, char *), verification);
	else if (str == 'p')
		value = ft_printf_void(va_arg(args, unsigned long long), verification);
	else if ((str == 'd') || (str == 'i'))
		value = ft_printf_nb(va_arg(args, int), verification);
	else if (str == 'u')
		value = ft_printf_nb_u(va_arg(args, unsigned int), verification);
	else if (str == 'x')
		value = ft_printf_nb_x(va_arg(args, unsigned int), verification);
	else if (str == 'X')
		value = ft_printf_nb_big_x(va_arg(args, unsigned int), verification);
	else if (str == '%')
		value = ft_printf_c('%', verification);
	else
		*verification = -1;
	if (value < 0)
		*verification = -1;
	return (value);
}

int	ft_printf(const char *str, ...)
{
	va_list	parametres;
	int		i;
	int		value;
	int		verification;

	i = 0;
	value = 0;
	va_start(parametres, str);
	if (!str)
		return (0);
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
	va_end(parametres);
	if (verification == -1)
		return (-1);
	return (value);
}

int main(void)
{
	// char a = 0;
	// void *ptr = &a;
	printf("%d\n",ft_printf(" %p %p ", 0, 0));
	// printf("%d\n",printf(" %p %p ", 1, ));
}
